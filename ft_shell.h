/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell1.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 01:13:19 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/24 02:37:26 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHELL_H
# define FT_SHELL_H

# include <libft.h>

# define STDIN 0
# define STDOUT 1
# define STDERR 2

typedef struct	s_shell_state
{
	t_bool exit;
}				t_shell_state;

typedef struct	s_command
{
	char	*name;
	void	(*handler)(t_shell_state *st, char *args[]);
}				t_command;

void			sh_cd(t_shell_state *st, char *args[]);
void			sh_setenv(t_shell_state *st, char *args[]);
void			sh_unsetenv(t_shell_state *st, char *args[]);
void			sh_env(t_shell_state *st, char *args[]);
void			sh_exit(t_shell_state *st, char *args[]);
void			sh_program(t_shell_state *st, char *args[]);

#endif
