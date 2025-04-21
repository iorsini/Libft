/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:37:10 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/14 14:29:17 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;
	size_t				i;

	ptr_s1 = (const unsigned char *)s1;
	ptr_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "banana";
	char	s2[] = "banaba";
	char	s3[] = "banana";
	char	s4[] = "bananaa";

	printf("Comparando s1 e s2 (esperado != 0): %d\n", ft_memcmp(s1, s2, 6));
	printf("Comparando s1 e s3 (esperado == 0): %d\n", ft_memcmp(s1, s3, 6));
	printf("Comparando s1 e s4 (esperado != 0): %d\n", ft_memcmp(s1, s4, 7));
	return (0);
}*/
