/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:11:36 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/14 15:14:57 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		check_base(char *base);
int		ft_strlen(char *str);

void	ft_convert(unsigned int nbr, char *base, char *result, int *index)
{
	unsigned int	len;

	len = ft_strlen(base);
	if (nbr >= len)
	{
		ft_convert(nbr / len, base, result, index);
		nbr %= len;
	}
	result[*index] = base[nbr];
	(*index)++;
}

int	digit_len(int n, int base)
{
	unsigned int	x;
	int				len;

	len = 0;
	x = n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		x = -n;
		len++;
	}
	while (x > 0)
	{
		len++;
		x /= base;
	}
	return (len);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		index;
	char	*result;
	int		digit;

	if (check_base(base_from) || check_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	digit = digit_len(nb, ft_strlen(base_to));
	result = (char *)malloc(sizeof(char) * digit + 1);
	if (!result)
		return (NULL);
	index = 0;
	if (nb < 0)
	{
		result[index++] = '-';
		nb = -nb;
	}
	ft_convert((unsigned int)nb, base_to, result, &index);
	result[index] = '\0';
	return (result);
}
