/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:33:33 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/17 11:15:12 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s1 = "atoms\0\0\0\0";
	char	*s2 = "atoms\0abc";
	char	*s3 = "bananas";
	printf("%d\n", ft_strncmp(s1, s2, 8));
	printf("%d\n", ft_strncmp(s1, s2, 0));	
	printf("%d\n", ft_strncmp(s3, s2, 9));
	return (0);
}
*/
