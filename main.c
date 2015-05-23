/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 00:29:22 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/24 00:42:32 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <libft.h>

#include "get_next_line.h"

int	main(int argc, char **argv)
{
	char *line;

	(void)argc;
	(void)argv;
	while (get_next_line(0, &line) > 0)
	{
		ft_putendl(line);
		free(line);
	}

	return (0);
}
