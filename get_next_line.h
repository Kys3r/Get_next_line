/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/06 15:36:05 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/06 17:52:09 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"

# define BUFF_SIZE 1000

typedef struct		s_lst
{
	struct s_lst	*next;
	char			*save;
	int				fd;
	int				ret_count;
}					t_lst;

int					get_next_line(const int fd, char **line);

#endif
