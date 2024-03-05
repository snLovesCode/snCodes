#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>

int main(void)
{
	int n;
	int fd[2];
	pid_t pid;
	char line[1024];

	if( pipe(fd) < 0 )
	{
		fprintf(stderr,"Failed to create pipe");
		return 1;
	}
	if( (pid = fork()) < 0 )
	{
		fprintf(stderr,"Failed to fork");
		return 2;

	}
	else if (pid > 0) /* parent process */
	{
		close(fd[0]);
		write(fd[1],"Hello World\n", 12);
	}
	else /* Child process */
	{
		close(fd[1]);
		n = read(fd[0],line,1024);
		write(STDOUT_FILENO, line, n);

	}
	return 0;
}
