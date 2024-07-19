int	atoi(char *text)
{
	int i = 0;
	int si = 1;
	int x = 0;
	while (text[i] == ' ' || (text[i] >= 9 && text[i] <= 13))
		i++;
	if (text[i] == '-' || text[i] == '+')
		if (text[i++] == '-')
			si *= -1;
	if (!(text[i] >= '0' && text[i] <= '9'))
		return (0);
	while (text[i] && (text[i] >= '0' && text[i] <= '9'))
		x = x * 10 + text[i++] - '0';
	return (si * x);
}