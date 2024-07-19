#include <unistd.h>

int	check1(char *str, int x)
{
	int	i;

	i = 0;
	while (i < x)
		if (str[i++] == str[x])
			return (0);
	return (1);
}
int	check2(char *str1, char *str2, int x)
{
	int	i;

	i = 0;
	while (str1[i])
		if (str1[i++] == str2[x])
			return (0);
	i = 0;
	return check1(str2,x);
}
int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (check1(argv[1], i))
				write(1, &(argv[1][i]), 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (check2(argv[1], argv[2], i))
				write(1, &(argv[2][i]), 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
