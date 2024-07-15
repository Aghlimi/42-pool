/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:25:29 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/14 18:10:46 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

void	calcul(int x, int y, char c)
{
	if (c == '-')
		ft_putnbr(x - y);
	else if (c == '+')
		ft_putnbr(x + y);
	else if (c == '/')
	{
		if (y != 0)
			ft_putnbr(x / y);
		else
			ft_putstr("Stop : division by zero");
	}
	else if (c == '*')
		ft_putnbr(x * y);
	else if (c == '%')
	{
		if (y != 0)
			ft_putnbr(x % y);
		else
			ft_putstr("Stop : modulo by zero");
	}
	else
		ft_putnbr(0);
}

int	main(int argc, char *argv[])
{
	int	n1;
	int	n2;

	if (argc == 4)
	{
		n1 = ft_atoi(argv[1]);
		n2 = ft_atoi(argv[3]);
		if (ft_strlen(argv[2]) == 1)
			calcul(n1, n2, argv[2][0]);
		else
			ft_putnbr(0);
	}
	return (0);
}
