/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iorsini- <iorsini-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:39:23 by iorsini-          #+#    #+#             */
/*   Updated: 2025/04/21 17:30:23 by iorsini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (((i == 0) || (s[i - 1] == c)) && (s[i] != c))
			count++;
		i++;
	}
	return (count);
}

static void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static char	**ft_filler(char const *s, char c, size_t count_words, char **split)
{
	size_t	word_len;
	size_t	i;
	size_t	current_word;

	i = 0;
	current_word = 0;
	while (s[i] && current_word < count_words)
	{
		while (s[i] == c)
			i++;
		word_len = 0;
		while (s[i] && s[i] != c)
		{
			word_len++;
			i++;
		}
		if (word_len > 0)
		{
			split[current_word] = ft_substr(s, i - word_len, word_len);
			if (!split[current_word])
				return (ft_free(split), NULL);
			current_word++;
		}
	}
	return (split[current_word] = NULL, split);
}

char	**ft_split(char const *s, char c)
{
	size_t	count_words;
	char	**split;

	if (!s)
		return (NULL);
	count_words = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (count_words + 1));
	if (!split)
		return (NULL);
	split = ft_filler(s, c, count_words, split);
	return (split);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i = 0;
	char	*s = "  hello, world ! ";
	char	c = ' ';
	char	**split = ft_split(s, c);
	while(split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}*/
