/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:51:22 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/08 17:02:32 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0')
		return (1);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_print(unsigned int nbr, char *base, unsigned int len)
{
	if (nbr >= len)
	{
		ft_print(nbr / len, base, len);
		nbr %= len;
	}
	write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len;

	len = 0;
	while (base[len])
		len++;
	if (check(base) || len <= 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	ft_print((unsigned int)nbr, base, len);
}
