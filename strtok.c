#include "shell.h"

int main(void)
{
	char str[] = "This is my strtok";
	char delim[] = " ";
	char *words;
	

	words = strtok(str, delim);

	while (words != NULL)
	{
		printf("%s\n", words);
		words = strtok(NULL, delim);
	}

	return (0);
}
