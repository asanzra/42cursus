/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-ra <asanz-ra@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:01:06 by asanz-ra          #+#    #+#             */
/*   Updated: 2024/01/11 21:36:20 by asanz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static size_t	get_0_ind_lim(const char *s1, const char *set);
static size_t	get_1_ind_lim(const char *s1, const char *set);

static char	*empty_string(void)
{
	char	*res;

	res = (char *) malloc(1);
	res[0] = '\0';
	return (res);
}

//If we have
//set = 42
//s1 = 4242asnc4422
//i1 = 012345678901
//lims     4  7
//trimmed= asnc\0
//trimmed_size = 7-4+2= 5
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	res_size;
	size_t	index_limits[2];

	if (s1[0] == '\0')
		return (empty_string());
	index_limits[0] = get_0_ind_lim(s1, set);
	index_limits[1] = get_1_ind_lim(s1, set);
	if (index_limits[0] == ft_strlen(s1) || index_limits[1] == ft_strlen(s1))
		return (empty_string());
	res_size = 2 + index_limits[1] - (index_limits[0]);
	res = (char *) malloc(res_size);
	ft_strlcpy(res, &(s1[index_limits[0]]), res_size);
	return (res);
}

//This f. returns the index of the first element in s1 that's not in set
//If every letter in set, resturns len of s1 (index of termnating NUL)
static size_t	get_0_ind_lim(const char *s1, const char *set)
{
	size_t	i1;
	size_t	iset;
	size_t	len1;
	size_t	lenset;

	len1 = ft_strlen(s1);
	lenset = ft_strlen(set);
	i1 = 0;
	while (i1 < len1)
	{
		iset = 0;
		while (iset < lenset && s1[i1] != set[iset])
			iset ++;
		if (s1[i1] != set[iset])
			return (i1);
		i1 ++;
	}
	return (i1);
}

//This f. returns the index of the first element in s1 that's not in set,
//beggining from the end. If every letter in set, returns len of s1.
static size_t	get_1_ind_lim(const char *s1, const char *set)
{
	size_t	i1;
	size_t	iset;
	size_t	len1;
	size_t	lenset;

	len1 = ft_strlen(s1);
	lenset = ft_strlen(set);
	i1 = len1 - 1;
	while (i1 >= 0)
	{
		iset = 0;
		while (iset < lenset && s1[i1] != set[iset])
			iset ++;
		if (s1[i1] != set[iset])
			return (i1);
		if (i1 == 0)
			return (len1);
		i1 --;
	}
	return (len1);
}
