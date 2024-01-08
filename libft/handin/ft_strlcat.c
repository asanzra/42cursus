/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-ra <asanz-ra@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 19:59:08 by asanz-ra          #+#    #+#             */
/*   Updated: 2024/01/08 20:43:53 by asanz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cpylen;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	cpylen = dstsize - dstlen;
	if (srclen < cpylen)
		cpylen = srclen;
	ft_memcpy(dst + dstlen, src, cpylen);
	//for(size_t i=0; i <cpylen;i++)
	//	dst[dstlen+i] = src[i];
	dst[cpylen] = '\0';
	return (dstlen + srclen);
}
