#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int	i;

	str = argv[1];
	i = 0;
	if (argc == 2)
	{
		while (str[i])
		{
		       while (str[i] > 32 && str[i] < 127)
		       {
				write (1, &str[i], 1);
		       		if (str[i + 1] < 33 || str[i + 1] > 126)
				{
					write (1, "\n", 1);
					return (1);
				}
				i++;
		       }
		       i++;
		}
		write (1, "\n", 1);

	}
	else
		write(1, "\n", 1);
}
