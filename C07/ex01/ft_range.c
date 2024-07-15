/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:11:13 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/08 16:50:31 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*list;
	int	i;

	if (min >= max)
		return (NULL);
	list = malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
		list[i++] = min++;
	return (list);
}
