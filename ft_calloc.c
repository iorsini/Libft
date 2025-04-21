/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:55:10 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/16 11:49:31 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	tot;

	tot = nmemb * size;
	if (nmemb != 0 && tot / nmemb != size)
		return (NULL);
	ptr = malloc(tot);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, tot);
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);

int	main(void)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *)ft_calloc(5, sizeof(int));
	if (!arr)
	{
		printf("Falha na alocação!\n");
		return (1);
	}
	while (i < 5)
	{	
		i++;
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	free(arr);
	return (0);
}*/
