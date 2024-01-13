#include "shell.h"

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"ls", "-a", NULL};
    char *envt[] = {"NULL"};

    printf("Before execve\n");
    if (execve("/usr/bin/ls", argv, envt) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}
