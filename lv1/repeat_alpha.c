#include <unistd.h>
int		main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;
	char	*str = argv[1];
	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				j = 0;	
				while(j < str[i] - 64)
				{
					write(1, &str[i], 1);
					j++;
				}
			}
			else if (str[i] >= 97 && str[i] <= 122)
			{
				j = 0;
				while (j < str[i] - 96)
				{
					write (1, &str[i], 1);
					j++;
				}
			}
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}