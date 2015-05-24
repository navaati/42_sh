/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 00:29:22 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/24 02:41:53 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include <libft.h>
#include "get_next_line.h"

#include "ft_shell.h"

static const t_command	g_builtins[] = {
	{ "cd", sh_cd },
	{ "setenv", sh_setenv },
	{ "unsetenv", sh_unsetenv },
	{ "env", sh_env },
	{ "exit", sh_exit },
	{ NULL, NULL }
};

static void	prompt(void)
{
	char	*cwd;

	cwd = getcwd(NULL, 0);
	ft_putstr(cwd);
	free(cwd);
	ft_putstr(" $ ");
}

static void	process_line(t_shell_state *st, char *line)
{
	char			**words;
	char			*command;
	const t_command	*builtin;

	words = ft_strsplit(line, ' ');
	if (words && words[0])
	{
		builtin = g_builtins;
		command = words[0];
		while (builtin->name)
		{
			if (ft_strequ(command, builtin->name))
			{
				builtin->handler(st, words);
				return ;
			}
			builtin++;
		}
		sh_program(st, words);
	}
}

int			main(int argc, char **argv)
{
	char			*line;
	t_shell_state	st;

	(void)argc;
	(void)argv;
	st.exit = FALSE;
	while (!st.exit && (prompt(), get_next_line(STDIN, &line)) > 0)
	{
		process_line(&st, line);
		free(line);
	}
	return (0);
}
