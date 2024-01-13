#include "shell.h"

extern char **environ;

int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;

	printf("The address for 'environ and 'env' are : %p and %p respectively\n", environ, env);
	return (0);
}

