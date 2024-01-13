#include "shell.h"

/**
 * main - fork example
 *
 * Return: Always 0.
 */

int main(void)
{
    pid_t my_pid;
    pid_t my_ppid;

    printf("Before fork\n");
    my_ppid = fork();
    if (my_ppid == -1)
    {
        perror("Error:");
        return (1);
    }
    printf("After fork\n");
    my_pid = getpid();
    printf("My pid is %u\n", my_pid);
    return (0);
}
