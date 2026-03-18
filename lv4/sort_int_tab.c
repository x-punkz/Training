void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j= 1;
	unsigned int temp;
	
	temp = 0;
	while (i < size - 1)
	{
		j = 0;
		if (tab[i] > tab[j])
		{
			temp = tab[j];
			tab[j] = tab[i];
			tab[i] = temp;
			j++;

		}
		i++;
	}
}
#include <stdio.h>
int	main(void)
{
	int	i = 0;
	int tab[] = {4, 2, 1, 5, 3};

	sort_int_tab(tab, 5);
	while (i <= 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
