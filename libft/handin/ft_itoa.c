/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-ra <asanz-ra@42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:47:06 by asanz-ra          #+#    #+#             */
/*   Updated: 2024/02/02 10:52:32 by asanz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int		get_digit_count(int n);
void	fill_str(char *str, int n, size_t strlen);

char	*ft_itoa(int n)
{
	size_t	strlen;
	char	*str;

	strlen = 0;
	if (n < 0)
	{
		n = -n;
		strlen++;
	}
	strlen += get_digit_count(n);
	str = (char *) malloc(strlen + 1);
	if (str == 0)
		return ((char *) 0);
	fill_str(str, n, strlen);
	return (str);
}

//Gets the number of digits in an intger by removing every last digit until 
//the integer is reduced to 0 (until no more digits left).
//Example: 9045->904->90->9->0 (4 changes=4 digits)
//For input of 0, the loop would return 0 digits, so we discard this case.
int	get_digit_count(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		n = n - n % 10;
		n = n / 10;
		count ++;
	}
	return (count);
}

//First fills symbol (-) then string from the last digit, then terminates it.
void	fill_str(char *str, int n, size_t strlen)
{
	int	write_i;
	int	first_i;
	int	digit;

	first_i = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		first_i = 1;
	}
	write_i = strlen - 1;
	while (write_i >= first_i)
	{
		digit = n % 10;
		n = n - digit;
		n = n / 10;
		str[write_i] = '0' + digit;
		write_i --;
	}
	str[strlen] = '\0';
}
