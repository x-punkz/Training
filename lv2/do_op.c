#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	first;
	char	*operator;
	int	second;
	int	result;

	i = 0;
	result = 0;
	if (argc == 4)
	{
		first = atoi(argv[1]);
		operator = argv[2];
		second = atoi(argv[3]);
		if (*operator == '+')
			result = first + second;
		else if (*operator == '-')
			result = first - second;
		else if (*operator == '*')
			result = first * second;
		else if (*operator == '/')
			result = first / second;
		else if (*operator == '%')
			result = first % second;
		printf("%d\n", result);
	}
	else
		printf("\n");
}
