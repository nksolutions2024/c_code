#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
	pid_t pid;

	pid = fork();

	if(pid < 0)
	{
		fprintf(stderr, "forked failed");
	}
	else if(pid == 0)
	{
		execlp("/bin/ls", "ls", NULL);
	}
	else
	{
		wait(NULL);
		printf("child complete");
	}
	
	return 0;
}
