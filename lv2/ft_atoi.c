/*LOGICA
 * multiplica conv por 10, p mudar a casa decimal e soma com o resultado
 * de str[i] - 48 (o zero em ascii) e dpois multiplicar pela flag
 * */
int	ft_atoi(const char *str)
{
	int	i;
	int	conv;
	int	flag;

	i = 0;
	conv = 0;
	flag = 1;
	if (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		flag *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		conv = (conv * 10) + (str[i] - 48);
		i++;
	}
	conv *= flag;
	return (conv);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}*/
