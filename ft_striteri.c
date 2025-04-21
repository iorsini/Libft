/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:15:29 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/21 17:05:43 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	add_star(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = '*';
}
#include <stdio.h>
int	main(void)
{
	char str[] = "aurorinha";
	ft_striteri(str, add_star);
	printf("%s\n", str);
	return(0);
}*/
