/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell1.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillot- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/24 01:13:19 by lgillot-          #+#    #+#             */
/*   Updated: 2015/05/24 01:41:08 by lgillot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHELL_H
# define FT_SHELL_H

# define STDIN 0
# define STDOUT 1
# define STDERR 2

void sh_cd(char *args[]);
void sh_setenv(char *args[]);
void sh_unsetenv(char *args[]);
void sh_env(char *args[]);
void sh_exit(char *args[]);
void sh_program(char *words[]);

#endif
