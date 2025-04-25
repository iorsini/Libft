/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:31:50 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/13 16:49:11 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;
	char	*ptr_s;

	i = 0;
	res = NULL;
	ptr_s = (char *)s;
	while (ptr_s[i] != '\0')
	{
		if ((unsigned char)ptr_s[i] == (unsigned char)c)
			res = &ptr_s[i];
		i++;
	}
	if ((char)c == '\0')
		return (&ptr_s[i]);
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*buffer = "bananas";
	printf("%s\n", ft_strrchr(buffer, 97));
	printf("%s\n", ft_strrchr(buffer, 122));
	printf("%s\n", ft_strrchr(buffer, '\0'));
	return (0);
}
*/
