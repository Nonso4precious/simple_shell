#include "shell.h"

int setenv(const char *name, const char *value, int overwrite)
{
	extern char **environ;
	int i = 0;
	int len = 0;
	char *my_val;

	if (!name || !value)
	{
		return (-1);
	}
	while (environ[i]);
	{
		len = strlen(name);
		if (strcmp(environ[i], len, name) == 0)
		{
			if (overwrite)
			{
				my_val = malloc(strlen(name) + (strlen(value) +2));
				strcpy(my_val, name);
				strcat(my_val, "=");
				strcat(my_val, value);
				environ[i + 1] = my_val;
				return (0);
			}
			return (0);
		}
		i++;
	}
	my_val = malloc(strlen(name) + (strlen(value) +2));
	strcpy(my_val, name);
	strcat(my_val, "=");
	strcat(my_val, value);
	environ[i + 1] = my_val;
	return (0);

}
