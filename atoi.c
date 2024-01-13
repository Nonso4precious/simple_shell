#include "shell.h"

/**
 * main - Print interacive if True and Non-interactive if False
 *
 * Return: Always 0.
 */

int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		interactive();
	}
	else
	{
		non_interactive();
	}
	return (0);
}

void interactive()
{
	printf("I am in interactive mode\n");
}
void non_interactive()
{
	printf("I am in non-interactive mode\n");
}
