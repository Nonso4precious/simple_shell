#include "shell.h"

void wo_strtok(const char *str, char delimeter)
{
	int len = strlen(str);
	char words[len + 1];
	int i, j;

	for (i = 0; i <= len; i++)
	{
		j = 0;

		if (str[i] == delimeter || str == NULL)
		{
			words[j] = '\0';
			
			if (j > 0)
			{
				printf("%s\n", words);
				j = 0;
			}
			else
			{
				words[j++] = str[i];
			}
		}
	}

}
