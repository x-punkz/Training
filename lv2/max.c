int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int	max;
	
	i = 0;
	max = 0;
	if (!tab)
		return (0);
	while (i <= len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>
#include <string.h>
int     main(void)
{       
        int	tab[] = {3, 2, 1, 7, 4, 6, 5};

	printf("minha -> %d\n", max(tab, 7));
}

