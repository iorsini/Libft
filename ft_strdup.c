/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:32:52 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/17 11:19:04 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*arara;

	arara = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!arara)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		arara[i] = s[i];
		i++;
	}
	arara[i] = '\0';
	return (arara);
}
/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char *original = "Hello, mundo!";
	char *duplicada = ft_strdup(original);

	if (duplicada == NULL)
		return (1);
	printf("Original : \"%s\"\n", original);
	printf("Duplicada: \"%s\"\n", duplicada);
	free(duplicada);
	return (0);
}
*/
