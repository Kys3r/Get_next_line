/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmerge.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/19 15:40:01 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/06 16:19:27 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmerge(char *s1, char *s2)
{
	char	*res;

	res = ft_strjoin((const char *)s1, (const char *)s2);
	free(s1);
	return (res);
}
