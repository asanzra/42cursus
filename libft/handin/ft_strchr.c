/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-ra <asanz-ra@42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 00:14:41 by asanz-ra          #+#    #+#             */
/*   Updated: 2024/01/10 00:54:24 by asanz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	*match;
	size_t	i;
	size_t	slen;

	slen = ft_strlen(s);
	match = (char *)s;
	c = c % 128;
	if (c == '\0')
		return (match + slen);
	i = 0;
	while (i < ft_strlen(s))
	{
		if (match[i] == c)
			return (match + i);
		i++ ;
	}
	return (0);
}
