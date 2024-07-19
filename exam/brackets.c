#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *text)
{
	int	i;

	i = 0;
	while (text[i])
		i++;
	return (i);
}
void	p(char *text)
{
	int	i;

	i = 0;
	while (text[i])
		write(1, &(text[i++]), 1);
}
int	ifb(char *text)
{
	int	i;

	i = -1;
	while (text[++i])
		if (text[i] == '(' || text[i] == '{' || text[i] == '[' || text[i] == ')'
			|| text[i] == '}' || text[i] == ']')
			return (1);
	return (0);
}
int	brackets(char *text)
{
	char	brack[ft_strlen(text)];
	int		i;
	int		b;

	i = 0;
	b = 0;
	while (text[i])
	{
		if (text[i] == '(' || text[i] == '{' || text[i] == '[')
		{
			brack[b++] = text[i];
			brack[b] = '\0';
		}
		else if (text[i] == ')')
		{
			if (brack[b - 1] == '(')
				brack[b-- - 1] = '\0';
            else
                return 0;
		}
		else if (text[i] == '}')
		{
			if (brack[b - 1] == '{')
				brack[b-- - 1] = '\0';
            else
                return 0;
		}
		else if (text[i] == ']')
		{
			if (brack[b - 1] == '[')
				brack[b-- - 1] = '\0';
            else
                return 0;
		}
		i++;
	}
	return (ft_strlen(brack) == 0);
}
int	main(int argc, char *argv[])
{
	int	i;

	(void)argc;
	i = 1;
	while (argv[i])
	{
		if (ifb(argv[i]))
		{
			if (brackets(argv[i]))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
		}
        else write(1, "OK\n", 3);
        i ++;
	}
	return (0);
}
