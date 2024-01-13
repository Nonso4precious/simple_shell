#include "shell.h"

/*int main(int ac, char **av)
{
	int i;
	printf("argv content is argv[]\n");

	while (av != NULL)
	{
		printf("arv[%d] = %s\n", i, av[i]);*/

int main(void)
{
	size_t n =10;
	char *buf;

	buf = malloc(sizeof (char) * 10);
	printf("$ ");
	getline(&buf, &n, stdin);
	printf("You have entered: %s", buf);
	printf("Buffer size: %ld\n", n);

	free (buf);

	return (0);
}
