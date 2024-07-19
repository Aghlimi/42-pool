#include <stdio.h>

int	ft_strlen(char *t)
{
	int	i;

	i = 0;
	while (t[i++])
		;
	return (i - 1);
}
int	main(int argc, char const *argv[])
{
		int tab[26] = {0};
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				tab[argv[1][i] - 'a']++;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				tab[argv[1][i] - 'A']++;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (tab[argv[1][i] - 'a'])
				{
					printf("%d%c, ", tab[argv[1][i] - 'a'], argv[1][i]);
					tab[argv[1][i] - 'a'] = 0;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				if (tab[argv[1][i] - 'A'])
				{
					printf("%d%c, ", tab[argv[1][i] - 'A'], argv[1][i] - 'A'
						+ 'a');
					tab[argv[1][i] - 'A'] = 0;
				}
			i++;
		}
	}
	printf("\n");
	return (0);
}
