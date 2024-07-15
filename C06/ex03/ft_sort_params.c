/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:50:17 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/06 10:05:48 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &(str[i ++]), 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i ++;
	return (s1[i] - s2[i]);
}

void	sort(char **list, int size)
{
	char	*tex;
	int		i;
	int		j;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(list[i], list[j]) > 0)
			{
				tex = list[i];
				list[i] = list[j];
				list[j] = tex;
			}
			j ++;
		}
		i ++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	sort(argv, argc);
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
