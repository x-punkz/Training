#include <stdlib.h>
int     *ft_range(int start, int end)
{
	int	*range;
	int	len;
	int	i;

	i = 0;
	len = (start - end);
	if (end > start)
		len  = (start - end) * -1;
	range = (int *)malloc(sizeof(int) * len);
	if (start < end)
	{
		while (i <= len)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	else if (end < start)
	{
		while (end <= start)
		{
			range[i] = start;
			start--;
			i++;
		}
	}
	return (range);
}

#include <stdio.h>
int	main(void)
{
	int	start = 2147483647;
	int	end = 2147483640;
	int	*range =  ft_range(start, end);
	int	i  = start - end;
	int	j = 0;
	while (j <= i)
	{
		printf("%d\n", range[j]);
		j++;
	}
		
		
}
