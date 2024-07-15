/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:31:45 by aghlimi           #+#    #+#             */
/*   Updated: 2024/06/30 09:17:14 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	nonprint(unsigned char str)
{
	char	*b;
	char	c;

	b = "0123456789abcdef";
	c = b[str / 16];
	write(1, &c, 1);
	c = b[str % 16];
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	b;

	i = 0;
	while (str[i])
	{
		b = str[i] >= ' ' && str[i] <= '~';
		if (b)
			write(1, &(str[i]), 1);
		else
		{
			write(1, "\\", 1);
			nonprint(str[i]);
		}
		i ++;
	}
}
