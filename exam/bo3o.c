#include <stdio.h>
#include <stdlib.h>
int ft_abs(int number)
{
    if (number < 0)
        number = -number;
    return number;
    
}
char	*ft_itoa_base(int value, int base)
{
	int		count;
	int		new_number;
	char	*text;

	count = 0;
	new_number = value;
    if (value == 0)
    {
        text = malloc(2);
        text[0] = '0';
        text[1] = 0;
        return text;
    }
    
	while (new_number != 0)
	{
		count++;
		new_number /= base;
	}
	text = malloc(count + 1);
	if (value < 0)
	{
		text[0] = '-';
		count++;
	}
	text[count--] = '\0';
	while (value != 0)
	{
		text[count--] = "0123456789ABCDEF"[ft_abs(value % base)];
		value /= base;
	}
	return (text);
}
int	main(int argc, char const *argv[])
{
	printf("%s",ft_itoa_base(-(-3), 10));
	return (0);
}
