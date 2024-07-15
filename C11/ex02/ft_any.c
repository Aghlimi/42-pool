/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:30:21 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/14 11:40:49 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (tab[i])
		if ((*f)(tab[i++]) != 0)
			return (1);
	return (0);
}