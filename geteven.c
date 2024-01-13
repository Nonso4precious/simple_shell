#include "shell.h"

void main(void)
{
	char *homevalue = getenv("HOME");
	printf("%s", homevalue);
}
