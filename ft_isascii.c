/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:40:08 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/11 17:35:44 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("Tem que dar 0: %d\n", ft_isascii(128));
	printf("Tem que dar != 0: %d\n", ft_isascii(90));
	return (0);
}
*/
