/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:57:56 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/02 11:00:02 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *text)
{
	int	i;

	i = 0;
	while (text[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_len(src));
	while (src[i] && i < size -1)
	{
		*(dest + i) = *(src + i);
		i ++;
	}
	*(dest + i) = '\0';
	return (ft_len(src));
}
