/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:17:22 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/03 16:31:54 by aghlimi          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ret;
	unsigned int	j;

	i = 0;
	ret = ft_strlen(dest);
	if (size == 0 || size <= ret)
		return (ft_strlen(src) + size);
	j = ret;
	while (src[i] && j < size - 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (ret + ft_strlen(src));
}
