/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:11:30 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/09 16:00:41 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	x;
	int	*result;

	x = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	result = malloc((max - min) * sizeof(int));
	if (result == NULL)
	{
		result = NULL;
		return (-1);
	}
	*range = result;
	while (min < max)
		result[x++] = min++;
	return (x);
}
