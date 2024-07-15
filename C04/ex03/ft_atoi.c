/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:47:12 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/03 22:44:32 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	niga;

	i = 0;
	result = 0;
	niga = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i ++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			niga *= -1;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + str[i++] - '0';
	return (niga * result);
}
