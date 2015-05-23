/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 00:29:22 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/24 01:40:21 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include <libft.h>
#include "get_next_line.h"

#include "ft_shell.h"

static void	prompt(void)
{
	char	*cwd;

	cwd = getcwd(NULL, 0);
	ft_putstr(cwd);
	free(cwd);
	ft_putstr(" $ ");
}

static void	process_line(char *line)
{
	char **words;
	char *command;
	char **args;

	words = ft_strsplit(line, ' ');
	if (words && words[0])
	{
		command = words[0];
		args = words + 1;
		if (ft_strequ(command, "cd"))
			sh_cd(args);
		else if (ft_strequ(command, "setenv"))
			sh_setenv(args);
		else if (ft_strequ(command, "unsetenv"))
			sh_unsetenv(args);
		else if (ft_strequ(command, "env"))
			sh_env(args);
		else if (ft_strequ(command, "exit"))
			sh_exit(args);
		else
			sh_program(words);
	}
}

int			main(int argc, char **argv)
{
	char	*line;

	(void)argc;
	(void)argv;
	while ((prompt(), get_next_line(STDIN, &line)) > 0)
	{
		process_line(line);
		free(line);
	}
	return (0);
}
