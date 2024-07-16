
void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	index1;
	int	index2;

	index1 = 0;
	index2 = size - 1;
	while (index1 < index2)
	{
		ft_swap(&(tab[index1]), &(tab[index2]));
		index1 ++;
		index2 --;
	}
}
