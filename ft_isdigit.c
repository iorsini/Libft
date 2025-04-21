/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:10:31 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/11 17:31:01 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= 48 && c <= 57))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("Tem que dar 0: %d\n", ft_isdigit(5));
	printf("Tem que dar != 0: %d\n", ft_isdigit(50));
	return (0);
}
*/
