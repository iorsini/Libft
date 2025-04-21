/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:36:02 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/14 14:06:16 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr_s;

	ptr_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == (unsigned char)c)
			return ((void *)&ptr_s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char	t[] = "abcdefghi";
	printf("%s\n", (char *)ft_memchr(t, 'i', 10));
	printf("%s\n", (char *)ft_memchr(t, 'i', 3));
	printf("%s\n", (char *)ft_memchr(t, 'k', 10));
	return (0);
}
*/
