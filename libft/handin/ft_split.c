/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-ra <asanz-ra@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 21:47:53 by asanz-ra          #+#    #+#             */
/*   Updated: 2024/01/29 13:41:16 by asanz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static size_t	count_strings(char const *s, char c);
static char		*get_string_from(size_t *is, char const *s, char c);
static char		**stop(size_t ires, char **res);

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	s_count;
	size_t	is;
	size_t	ires;

	s_count = count_strings(s, c);
	res = (char **)malloc(sizeof(char *) * (s_count + 1));
	if (res == 0)
		return ((char **)0);
	is = 0;
	ires = 0;
	while (ires < s_count)
	{
		res[ires] = get_string_from(&is, s, c);
		if (res[ires] == 0)
			return (stop(ires, res));
		ires ++;
	}
	res[s_count] = (char *) 0;
	return (res);
}

static char	**stop(size_t ires, char **res)
{
	while (ires > 0)
	{
		free(res[ires]);
		ires --;
	}
	free(res[0]);
	free(res);
	return ((char **)0);
}

static char	*get_string_from(size_t *is, char const *s, char c)
{
	size_t		len;
	char		*res;
	char const	*start_in_s;

	while (s[*is] == c)
		(*is)++;
	len = 0;
	start_in_s = &(s[*is]);
	while (s[*is] != c)
	{
		len ++;
		(*is)++;
	}
	res = (char *)malloc(len + 1);
	if (res == 0)
		return ((char *)0);
	ft_strlcpy(res, start_in_s, len + 1);
	return (res);
}

static size_t	count_strings(char const *s, char c)
{
	size_t	counter;
	size_t	i;
	int		in_word;

	counter = 0;
	i = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (!(in_word) && s[i] != c)
		{
			in_word = 1;
			counter ++;
		}
		else if (in_word && s[i] == c)
			in_word = 0;
		i ++;
	}
	return (counter);
}
