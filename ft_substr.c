/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:11:40 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/17 14:58:01 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	if (!(s))
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup (""));
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char *original = "Agora vai!";
	char *sub;

	sub = ft_substr(original, 6, 3);
	if (sub == NULL)
	{
		return (1);
	}
	printf("Original : %s\n", original);
	printf("Substring: %s\n", sub);
	free(sub);
	return (0);
}
*/
