/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandro <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 01:18:11 by alejandro         #+#    #+#             */
/*   Updated: 2024/01/05 01:21:45 by alejandro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	is_lower;
	int	is_upper;

	is_lower = c >= 'a' && c <= 'z';
	is_upper = c >= 'A' && c <= 'Z';
	return (is_lower || is_upper);
}
