#include <stdio.h>
#include <stdlib.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;

	i = 2;
	while (i <= a * b)
		if (i % a   == 0 && i % b   == 0)
			return (i);
		else
			i++;
	return (0);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%d", lcm((unsigned int)atoi(argv[1]),
			((unsigned int)atoi(argv[2]))));
	return (0);
}
