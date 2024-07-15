/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:55:44 by aghlimi           #+#    #+#             */
/*   Updated: 2024/06/27 17:16:47 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int list[12], int size)
{
	size --;
	while (0 <= size)
	{
		ft_putchar('0' + list[size]);
		size --;
	}
}

int	abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-1 * i);
	}
}

int	intsize(int i)
{
	int	result;

	result = 1;
	if (i < 0)
	{
		ft_putchar('-');
	}
	while (abs(i / 10) != 0)
	{
		result ++;
		i = i / 10;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	int	list[12];
	int	i;
	int	size;
	int	len;
	int	b;

	i = 0;
	b = 1;
	size = 0;
	len = intsize(nb);
	while (b)
	{
		list[size] = abs(nb % 10);
		size ++;
		nb = nb / 10;
		if (size == len)
		{
			b = 0;
		}
	}
	print(list, size);
}
