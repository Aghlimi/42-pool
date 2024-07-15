/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:03:36 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/02 10:25:04 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *text)
{
	int	i;

	i = 0;
	while (text[i])
		i ++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
				j ++;
			if (!to_find[j])
				return (str + i);
		}
		i ++;
	}
	return (0);
}
