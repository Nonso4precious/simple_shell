#include "shell.h"

int main(void)
{
	pid_t chld_pid;
	int status;
	int i;
	char *argv[] = {"ls", "-l", "/tmp", NULL};


	for (i = 1; i<=5; i++)
	{
		chld_pid = fork();
		if (chld_pid == -1)
		{
			perror("Error:");
			return (1);

		}
	}
	if (chld_pid == 0)
	{
		execve("/usr/bin/ls", argv, NULL);
		perror("Error:");
		exit (1);
	}
	else
	{
		/*parent*/
		wait(&status);

	}
}
