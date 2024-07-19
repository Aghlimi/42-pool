#include <unistd.h>

void	p(char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned long int n)
{
	if (n >= 16)
		print_hex(n / 16);
	p("0123456789abcdef"[n % 16]);
}

void	print_memory(void *addr, int size)
{
	int				i;
	unsigned char	*t;
	int				col;
	int				b;
	int				x;

	i = 0;
	t = (unsigned char *)addr;
	col = 0;
	b = 0;
	while (i < size)
	{
		x = i;
		print_hex((int)(&(t[i])));
		p(':');
		p(' ');
		while (col++ < 16 && i < size)
		{
			if (t[i] < 16)
			{
				p('0');
			}
			print_hex(t[i++]);
			b++;
			if (b == 2)
			{
				p(' ');
				b = 0;
			}
		}
		while (col++ <= 16)
		{
			p(' ');
			p(' ');
			b ++;
			if (b == 2)
			{
				p(' ');
				b = 0;
			}
		}
		col = 0;
		while (x < i)
		{
			if (t[x] >= 32 && t[x] <= 126)
				p(t[x]);
			else
				p('.');
			x++;
		}
		p('\n');
	}
}

int	main(void)
{
	char	tab[] = "hello bro hhhhhhhhhhhhhhhhhhh";
	print_memory(tab,999999999);
	return (0);
}
