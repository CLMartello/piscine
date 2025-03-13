#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev[size];
	int	n;
	int	lim;

	n = 0;
	lim = size;
	while (n < lim)
	{
		rev[size - 1] = tab[n];
		size--;
		n++;
	}
	n = 0;
	while (n < lim)
	{
		tab[n] = rev[n];
		n++;
	}
	n = 0;
	while (n < lim)
	{
		printf("%d\n", tab[n]);
		n++;
	}
}

int	main(void)
{
	int a[7] = {1, 2, 3, 4, 5, 6, 7};
	ft_rev_int_tab(a, 7);
}

