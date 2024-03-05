/* Linux Programming Interface Listing 44-2 */
#include<unistd.h>
#include<stdio.h>
#include<wait.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main(int argc, char** argv)
{
	int BUF_SIZE=1024;
	if(argc<2)
	{
		fprintf(stderr,"Invalid usage");
		exit(1);
	}
	char* message=argv[1];
	int pipe_fds[2];
	int n=0;
	pid_t pid;
	if( pipe(pipe_fds) < 0 )
	{
		fprintf(stderr,"Failed to initialize pipe\n");
		exit(2);
	}
	if( (pid=fork()) == -1)
	{
			fprintf(stderr,"Failed to fork");
			exit(3);
	}
	if(pid == 0)/*child process */
	{		;/* empty statment */
			char buffer[1024];
			fprintf(stderr,"I am the child process\n");
			if(close(pipe_fds[1]) < 0)/* close the write end of pipe as child will read from parent */
			{
				fprintf(stderr,"Failed to close writeFD of pipe\n");
				exit(1);
			}
			for(;;)
			{
			n=read(pipe_fds[0],buffer,BUF_SIZE);
			if(n<0)
			{
				fprintf(stderr,"read failed %s\n",strerror(errno));
				close(pipe_fds[0]);/* close the read end of pipe before exiting */
				_exit(1);
			}
			else if(n==0)
			{
				fprintf(stderr,"got EOF\n");
				close(pipe_fds[0]);/* close the read end of pipe before exiting */
				break;
			}
			else
			{
				fprintf(stdout,"Child:%s\n",buffer);
			}
			}
	}
	if(pid>0)/* parent case */
	{		close(pipe_fds[0]);/*close read end of pipe as we will write to child */
			n=write(pipe_fds[1],message,strlen(message));
			if(n<0)
			{
				fprintf(stderr,"Failed to write to pipe\n");
			}
			else if(n==0)
			{
				fprintf(stderr,"Wrote 0 bytes\n");
			}
			else
			{
				fprintf(stderr,"Wrote %d bytes on pipe",n);
			}
				close(pipe_fds[1]);/*child will get EOF now*/
				wait(NULL);
				fprintf(stderr,"The child has exited\n");
				exit(EXIT_SUCCESS);
	}
	return 0;
}	

