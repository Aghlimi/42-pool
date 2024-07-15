/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:21:14 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/13 09:48:58 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_parts(char *str, char *charset)
{
	int	count;
	int	new_word;
	int	i;

	i = 0;
	new_word = 1;
	count = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset) == 0 && new_word)
		{
			count++;
			new_word = 0;
		}
		else if (is_sep(str[i], charset) == 1)
			new_word = 1;
		i++;
	}
	return (count);
}

char	*ft_dup(char *str, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len] && is_sep(str[len], charset) == 0)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		words;
	int		i;

	words = ft_count_parts(str, charset);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	i = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset) == 1)
			str++;
		if (*str)
		{
			result[i] = ft_dup(str, charset);
			i++;
			while (*str && is_sep(*str, charset) == 0)
				str++;
		}
	}
	result[i] = 0;
	return (result);
}
