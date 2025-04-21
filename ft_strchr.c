/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:30:32 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/13 16:21:20 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr_s;
	int		i;

	ptr_s = (char *)s;
	i = 0;
	while (ptr_s[i] != '\0')
	{
		if (ptr_s[i] == (char)c)
			return (&ptr_s[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&ptr_s[i]);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*buffer = "banana";
	printf("%s\n", ft_strchr(buffer, 97));
	printf("%s\n", ft_strchr(buffer, 122));
	printf("%s\n", ft_strchr(buffer, '\0'));
	return(0);
}
*/
