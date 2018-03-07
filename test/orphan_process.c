#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	pid_t pid;
	pid = fork();
	if(pid < 0)
	{
		perror("fork false \n");
		exit(1);
	}
	if(0 == pid)
	{
		printf("child process\n");
		printf("pid:%d,ppid:%d \n", getpid(), getppid());
		sleep(3);
		printf("sleep five second\n");
		printf("pid:%d,ppid:%d \n", getpid(), getppid());
		printf("child process exit");
	}
	else
	{
		printf("parent process\n");
		sleep(1);
		printf("parent process pid:%d\n", getpid());
	}
	return 0;
}
