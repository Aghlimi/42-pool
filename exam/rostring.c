#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *text)
{
	int	i;

	i = 0;
	while (text[i])
		i++;
	return (i);
}
int	main()
{
	
	return (0);
}
