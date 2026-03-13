#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	conv;
	int	flag;

	i = 0;
	conv = 0;
	flag = -1;
	while ((str[i] >= 7 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		flag *= 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		conv = conv * 10 + (str[i] - 48);
		i++;
	}
	return (conv);
}

void	ft_putnbr(int nbr)
{
	int	conv;
	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	conv = (nbr % 10) + 48;
	write(1, &conv, 1);

}

int	is_prime(int nbr)
{
	int	i;

	i = 2;
	if (nbr < 2)
		return (0);
	while (i <= nbr / 2)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	num;
	int	sum;

	num = 0;
	sum = 0;
	if (argc == 2 && argv[1][0] != '-')
	{
		num = ft_atoi(argv[1]);
		while (num > 1)
		{
			if (is_prime(num))
				sum += num;
			num --;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "0\n", 2);
	}
}
