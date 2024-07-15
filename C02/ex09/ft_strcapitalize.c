/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:29:38 by aghlimi           #+#    #+#             */
/*   Updated: 2024/06/30 11:53:38 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str, int i)
{
	int	up_next;
	int	low_next;
	int	number;

	low_next = (str[i - 1] >= 'a' && str[i - 1] <= 'z');
	up_next = (str[i - 1] >= 'A' && str[i - 1] <= 'Z');
	number = (str[i - 1] >= '0' && str[i - 1] <= '9');
	return (!low_next && !up_next && !number);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	up;
	int	low;

	i = 0;
	while (str[i])
	{
		low = (str[i] >= 'a' && str[i] <= 'z');
		up = (str[i] >= 'A' && str[i] <= 'Z');
		if (up || low)
		{
			if (i == 0 || check(str, i))
			{
				if (low)
					str[i] -= 32;
			}
			else
				if (up)
					str[i] += 32;
		}
		i ++;
	}
	return (str);
}
