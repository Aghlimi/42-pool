#include <stdlib.h>
int	size(int number)
{
	int	x;

	x = 1;
	while (number > 1)
	{
		number /= 10;
		x++;
	}
	return (x);
}
char	*_itoa(unsigned int number, int niga)
{
	int		i;
	int		g;
	char	*text;
	char	c;

	i = 0;
	g = 0;
	text = (char *)malloc(size(number) + 2);
	if (niga < 0){
		g = 1;
		text[i++] = '-';
		}
	text[i] = '\0';
	while (number != 0)
	{
		text[i++] = number % 10 + '0';
		number /= 10;
	}
	text[i--] = '\0';
	
	while (g < i)
	{
		c = text[g];
		text[g++] = text[i];
		text[i--] = c;
	}
	return (text);
}
char	*ft_itoa(int number)
{
	if (number < 0)
		return (_itoa((unsigned int)(-number), -1));
	return (_itoa(number, 1));
}
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(__INT_MIN__));
}
