
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int x, int y)
{
	ft_putchar('0' + x / 10);
	ft_putchar('0' + x % 10);
	ft_putchar(' ');
	ft_putchar('0' + y / 10);
	ft_putchar('0' + y % 10);
	if (x != 98 || y != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			print(x, y);
			y++;
		}
		x++;
	}
}
