/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 00:29:22 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/24 01:06:41 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include <libft.h>

#include "get_next_line.h"

static void prompt()
{
	char	*cwd;

	cwd = getcwd(NULL, 0);
	ft_putstr(cwd);
	free(cwd);
	ft_putstr(" $ ");
}

static void process_line(char *line)
{
	ft_putendl(line);
}

int	main(int argc, char **argv)
{
	char	*line;

	(void)argc;
	(void)argv;
	prompt();
	while (get_next_line(0, &line) > 0)
	{
		process_line(line);
		free(line);
		prompt();
	}

	return (0);
}
