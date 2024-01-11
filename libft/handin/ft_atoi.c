/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-ra <asanz-ra@42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 03:54:12 by asanz-ra          #+#    #+#             */
/*   Updated: 2024/01/11 17:37:41 by asanz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	char	c;
	int		sign;
	int		unsig_result;

	i = 0;
	c = str[i];
	sign = 1;
	unsig_result = 0;
	while (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v')
		c = str[++i];
	if (c == '-')
		sign = -1;
	if (c == '+' || c == '-')
		c = str[++i];
	while (ft_isdigit(c))
	{
		unsig_result *= 10;
		unsig_result += c - '0';
		c = str[++i];
	}
	return (sign * unsig_result);
}
