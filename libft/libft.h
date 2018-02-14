/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/06 15:54:43 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/06 16:41:59 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

void		*ft_memalloc(size_t size);
char		*ft_strcat(char *dest, const char *src);
size_t		ft_strlen(const char *str);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(const char *str);
char		*ft_strmerge(char *s1, char *s2);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_leak_sub(char const *s, unsigned int start, size_t len);
void		*ft_memset(void *buf, int c, size_t count);
char		*ft_strcpy(char *dest, const char *src);
int			ft_search_rc(char *str, int param);

#endif
