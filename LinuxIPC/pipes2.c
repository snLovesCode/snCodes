#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<stdlib.h>
#include<sys/wait.h>





int main(int argc, char** argv)
{
	if(argc<2)
	{
		fprintf(stderr,"Usage:%s <file_to_read>\n",argv[0]);
		return 1;
	}
	char* filename;
	filename=argv[1];
	const char* pager="/bin/more";
	pid_t pid;
	int fd[2];
	if(pipe(fd) < 0 )
	{
		fprintf(stderr,"Pipe creation error\n");
		return 3;
	}
	if( (pid=fork()) < 0 ) 
	{
		fprintf(stderr,"Fork error\n");
		return 2;
	}
	else if ( pid > 0) /* parent process */
	{
		close(fd[0]);/*close the read end of pipe*/
			char buffer[1024];
		FILE* fp=fopen(filename,"r");
		if( fp == NULL )
		{
			fprintf(stderr,"Failed to open %s",filename);
			return 5;
		}
		while( fgets(buffer,1023,fp) != NULL)
		{
			int n=strlen(buffer);
			if(write(fd[1],buffer,n) != n)
			{
				fprintf(stderr,"Failed to write %d chars to pipe",n);
				return 6;
			}
		}
		close(fd[1]);/*now close the write end of pipe so that child can get EOF*/
		if(waitpid(pid,NULL,0) == -1)
		{
			fprintf(stderr,"waitpid failure");
			return 7;
		}	
		exit(0);
	}
	else /* child process */
	{
		if( execl(pager,"more",(char*)NULL) != 0 )
		{
			fprintf(stderr,"execl failed");
			return 4;
		}

		close(fd[1]);/* close write end of pipe in child */
		if(fd[0] != STDIN_FILENO)
		{
			dup2(fd[0],STDIN_FILENO);
			close(fd[0]);
		}
		char buffer[1024];
		while( read(fd[0],buffer,1023) != EOF)
		{
			fprintf(stdout,"%s",buffer);
		}
		close(fd[0]); /* close read end of pipe in child */
		exit(0);
	}

}
