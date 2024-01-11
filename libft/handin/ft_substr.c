/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-ra <asanz-ra@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:56:23 by asanz-ra          #+#    #+#             */
/*   Updated: 2024/01/11 21:46:10 by asanz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (start >= ft_strlen(s))
	{
		res = (char *) malloc(1);
		res[0] = '\0';
		return (res);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	res = (char *) malloc(len + 1);
	if (res == 0)
		return ((char *)0);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
