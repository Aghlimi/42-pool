/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:14:47 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/15 11:18:45 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **t, char **v)
{
	char	*y;

	y = *t;
	*t = *v;
	*v = y;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*t1;
	char	*t2;

	i = 0;
	while (tab[i] && tab[i + 1])
	{
		if ((*cmp)(tab[i], tab[i + 1]) > 0)
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		i++;
	}
}
