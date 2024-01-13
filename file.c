#include "shell.h"

void check_file(char *comd)
{
	if (access(comd, F_OK) == 0)
	{
		printf("%s\n: FOUND THE FILE\n", comd);
	}
	else
	{
		printf("%s\n: FILE DOESN'T EXIST\n", comd);
	}
}

int main (void)
{
	char *buf = NULL;
	size_t buf_size = 0;
	char *toks;

	while (1)
	{
		write(1, "CISFUN$ ", 8);
		getline(&buf, &buf_size, stdin);
		toks = strtok(buf, " \t\n");
		
		if (strcmp(toks, "which") == 0)
		{
			toks = strtok(NULL, " \t\n");
			while (toks)
			{
				check_file(toks);
				toks = strtok(NULL, " \t\n");
			}
		
		}
		else
		{
			write(1, "COMMAND DOESNT EXIST\n", 21);
		}
	}
	return (0);
}





