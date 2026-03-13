int	    is_power_of_2(unsigned int n)
{
	if (n % 2 != 0)//se for impar, retorna erro
		return (0);
	while (n != 1)//pq se for 1, ja n é mais power.	
	{
		if (n % 2 == 0)// Se for par, vai dividindo p ver se no final é power 
			n = n / 2;
		else//caso contrario ja retorna erro
			return (0);
	}
	return (1);
}
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	if (is_power_of_2(atoi(argv[1])))
		printf("é!\n");
	else
		printf("não é!\n");
}
