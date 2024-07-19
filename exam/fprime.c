#include <stdio.h>
#include <stdlib.h>

int	is_p(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
		if (nb % i++ == 0)
			return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	int	number;
	int	i;

	if (argc == 2)
	{
		number = atoi(argv[1]);
		i = 2;
		while (!is_p(number) && i < number)
		{
			if (is_p(i) && number % i == 0)
			{
				printf("%d*", i);
				number /= i;
                i = 2;
			}
			i++;
		}
		printf("%d", number);
	}
    printf("\n");
	return (0);
}
