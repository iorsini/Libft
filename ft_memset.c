/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:47:45 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/12 13:56:34 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	val;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	val = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = val;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	unsigned char	buffer[10];
	size_t	i;

	i = 0;
	ft_memset(buffer, '-', 10);
	ft_memset(buffer, 'X', 5);
	while (i < 10)
	{
		printf("%c", buffer[i]);
		i++;
	}
	return (0);
}*/
