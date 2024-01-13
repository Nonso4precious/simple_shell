#include "shell.h"

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */

int main(void)
{
    pid_t chld_pid;
    int status;

    chld_pid = fork();
    if (chld_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    if (chld_pid == 0)
    {
        printf("Wait for me, wait for me, I'm coming\n");
        sleep(3);
    }
    else
    {
        wait(&status);
        printf("Oh, it's all better now\n");
    }
    return (0);
}
