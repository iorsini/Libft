/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:10:29 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/14 15:20:43 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	char t1[] = "  --123";
	char t2[] = "  -+123";
	char t3[] = "  +123";
	char t4[] = "  -00123abc";
	printf("%d\n", ft_atoi(t1));
	printf("%d\n", ft_atoi(t2));
	printf("%d\n", ft_atoi(t3));
	printf("%d\n", ft_atoi(t4));
	return (0);
}
*/
