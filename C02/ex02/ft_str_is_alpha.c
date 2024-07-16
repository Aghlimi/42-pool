
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	up;
	int	lowe;

	i = 0;
	while (str[i])
	{
		up = (str[i] >= 'a' && str[i] <= 'z');
		lowe = (str[i] >= 'A' && str[i] <= 'Z');
		if (!up && !lowe)
		{
			return (0);
		}
		i ++;
	}
	return (1);
}
