/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouaammo <mouaammo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:55:40 by mouaammo          #+#    #+#             */
/*   Updated: 2022/12/17 12:55:18 by mouaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "./libft/libft.h"
# include "./get_next_line/get_next_line.h"
# include <string.h>
# include <stdlib.h>

void	read_from_input(int *fd, char *limiter, char **line);
int		open_file(char *file, char *type);
char	*free_all(char **ptr);
char	*check_path(char **paths, char *arv);
char	*get_path(char **ev);
void	error(void);
void	execute(char **env, char *av, int *fd);
int		ft_strcmp(const char *s1, const char *s2);

#endif