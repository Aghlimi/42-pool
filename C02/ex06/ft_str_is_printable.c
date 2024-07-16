
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= ' ' && str[i] <= '~')
		i ++;
	return (str[i] == 0);
}
