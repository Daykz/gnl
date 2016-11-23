/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:55:19 by dmathe            #+#    #+#             */
/*   Updated: 2015/03/17 19:18:44 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUF_SIZE 8
# define A			0
# define INDICE		1
# define RET		2
# include <unistd.h>
# include <stdlib.h>

void		stock_line(char *buf, char *line, int *i, int *var);
int			get_next_line(int const fd, char **line);
#endif
