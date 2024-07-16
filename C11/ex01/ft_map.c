/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:00:54 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/16 18:33:59 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*list;

	i = 0;
	list = malloc(length * sizeof(int));
	if (list == NULL)
		return (NULL);
	while (i++ < length)
		list[i - 1] = (*f)(tab[i - 1]);
	return (list);
}
