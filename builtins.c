/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 01:42:02 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/24 02:02:20 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include <libft.h>

#include "ft_shell.h"

void sh_cd(t_shell_state *st, char *args[])
{
	(void)st;
	(void)args;
}

void sh_setenv(t_shell_state *st, char *args[])
{
	(void)st;
	(void)args;
}

void sh_unsetenv(t_shell_state *st, char *args[])
{
	(void)st;
	(void)args;
}

void sh_env(t_shell_state *st, char *args[])
{
	(void)st;
	(void)args;
}

void sh_exit(t_shell_state *st, char *args[])
{
	(void)args;
	st->exit = TRUE;
}
