/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:12:59 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/21 15:46:07 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	long	nb;
	int		digits;

	nb = n;
	digits = 0;
	if (nb <= 0)
	{
		digits = 1;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;
	long	nb;
	int		start;

	nb = n;
	digits = ft_count_digits(n);
	str = malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (NULL);
	str[digits] = '\0';
	start = 0;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
		start = 1;
	}
	while (digits > start)
	{
		digits--;
		str[digits] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	int		a = -165;
	char	*result = ft_itoa(a);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
