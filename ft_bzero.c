/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:09:04 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/12 14:12:20 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	buffer[10];
	size_t	i;

	i = 0;
	ft_memset (buffer, '3', 10);
	ft_bzero (buffer, 4);
	while (i < 10)
	{	
		printf("%d", buffer[i]);
		i++;
	}
	return (0);
}*/
