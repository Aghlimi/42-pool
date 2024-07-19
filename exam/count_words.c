int	count(char *text)
{
	int i = 0;
	int count = 0;
	while (text[i])
	{
		if (text[i] != ' ' && (text[i - 1] == ' ' || i == 0))
			count++;
		i++;
	}
	return (count);
}
#include<stdio.h>
int main(int argc, char *argv[])
{
    (void)argc;
    printf("%d",count(argv[1]));
    return 0;
}
