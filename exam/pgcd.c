#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	number1;
	int	number2;
	int	i;

	if (argc == 3)
	{
		number1 = atoi(argv[1]);
		number2 = atoi(argv[2]);
		i = number1 < number2 ? number1:number2;
		while (i > 0)
		{
			if (number1 % i == 0 && number2 % i == 0){
				printf("%d",i);
				break;
			}
			i--;
		}
	}
	printf("\n");
	return (0);
}
