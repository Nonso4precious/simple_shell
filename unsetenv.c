#include "shell.h"

void	ft_remove_env_var(char **environ, int i)
{
	free(environ[i]);
	environ[i] = NULL;
	while (environ[i + 1])
	{
		environ[i] = ft_strdup(environ[i + 1]);
		free(environ[i + 1]);
		i++;
	}
	environ[i] = NULL;
}

int		ft_unsetenv(char **args, char **environ)
{
	int i;

	i = 0;
	if (!args[1])
	{
		ft_printf(2, "unsetenv: Too few arguments.\n");
		return (-1);
	}
	else if ((i = ft_getenv_index(args[1], environ)) != -1)
		ft_remove_env_var(environ, i);
	return (0);
}
