/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:47:59 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/18 11:55:14 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i + ft_strlen(little) <= len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == (little[j]))
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*big = "eu não sei o que estou fazendo da minha vida";
	const char	*little = "minha";
	const char	*little_2 = "";
	printf("%s\n", ft_strnstr(big, little, 50));
	printf("%s\n", ft_strnstr(big, little, 10));
	printf("%s\n", ft_strnstr(big, little_2, 5)); 
	return (0);
}
*/
