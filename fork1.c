#include "shell.h"

/**
 * main - fork
 *
 * Return: Always 0.
 */

int main(void)
{
    pid_t my_pid;
    pid_t chld_pid;

    chld_pid = fork();
    if (chld_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    my_pid = getpid();
    printf("My pid is %u\n", my_pid);
    if (chld_pid == 0)
    {
        printf("(%u) Nooooooooo!\n", my_pid);
    }
    else
    {
        printf("(%u) %u, I am your father\n", my_pid, chld_pid);
    }
    return (0);
}
