#include <unistd.h>
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}
int	main(int argc, char **argv)
{
	int	i = 0;
	char	*str1 = argv[1];
	char	*target = argv[2];
	char	*replace = argv[3];
	if (argc == 4)
	{
		if (ft_strlen(target) > 1 || ft_strlen(replace) > 1)
		{
			write (1, "\n", 1);
			exit(0);
		}
		while (str1[i])
		{
			if (str1[i] == target[0])
				str1[i] = replace[0];
			write (1, &str1[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}