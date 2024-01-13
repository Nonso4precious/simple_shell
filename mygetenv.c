#include "shell.h"

char _getenv(const char *name)
{
	extern char **environ;
	int i;
	char *toks;

	i = 0;
	while (environ[i])
	{
		toks = strtok(environ[i], "=");
		if (strcmp(toks, name) == 0)
		{
			return ('\0', '=');
		}
		i++;
	}
	return ('\0');
}

void main(void)
{
	char *homevalue = getenv("HOME");
	printf("%s\n", homevalue);
}
