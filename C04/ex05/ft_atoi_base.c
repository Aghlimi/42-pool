/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:08:03 by aghlimi           #+#    #+#             */
/*   Updated: 2024/07/04 09:36:04 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_in(char c, char *text)
{
	int	i;

	i = 0;
	while (text[i] && text[i] != c)
		i++;
	if (text[i] != '\0')
		return (-1);
	else
		return (i - 1);
}

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (1);
}

int	tron(char *str, char *base)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[j] == str[i])
				break ;
			else
				j++;
		}
		result = result * ft_strlen(base) + j;
		i++;
	}
	return ((int)result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	niga;
	int	j;

	i = 0;
	j = 0;
	niga = 1;
	if (check(base) == 0)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			niga *= -1;
	while (base[j])
	{
		if (base[j] == str[i])
			break ;
		else
			j++;
	}
	if (base[j] == '\0')
		return (0);
	return (tron(str + i, base) * niga);
}
int	main(int argc, char const *argv[])
{
	int	x;

	x = ft_atoi_base("2147483647", "0123456789");
	printf("%d", x);
	return (0);
}
