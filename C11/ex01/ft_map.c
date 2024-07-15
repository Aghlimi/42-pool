/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:00:54 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/14 11:39:08 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*list;

	i = 0;
	list = malloc(length * sizeof(int));
	while (i < length)
	{
		list[i] = (*f)(tab[i]);
		i++;
	}
	return (list);
}
