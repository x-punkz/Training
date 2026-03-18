#include <stdlib.h>
#include <stdio.h>
int	c_digit(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return(1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n  = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char	*conv;
	int	size;
	int	i;

	i = 0;
	size = c_digit(nbr);
	conv = malloc(size + 1);
	if (nbr < 0)
	{
		nbr *= -1;
		conv[0] = '-';
	}
/*	if (nbr == 0) com o jeito mais sensato debaixo
	{
		conv[0] = '0';
	}
*/	i = size - 1;
//	while (nbr > 0) o jeito mais sensato
//	{
//		conv[i] = (nbr % 10) + 48;
//		nbr /= 10;
//		i--;
//	}
	while (i >= 0)
	{
		if (i == 0 && conv[i] == '-')
			break ;
		conv[i] = (nbr % 10) + 48;
		nbr /= 10;
		i--;
	}
	conv[size] = '\0';
	return (conv);

}

int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-42));
}
