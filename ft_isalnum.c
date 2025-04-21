/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:21:39 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/11 17:33:27 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("Tem que dar 0: %d\n", ft_isalnum(5));
	printf("Tem que dar != 0: %d\n", ft_isalnum(90));
	printf("Tem que dar != 0: %d\n", ft_isalnum(50));
	return (0);
}
*/
