#include <stdlib.h>

char	**ft_split(char *str)
{
	int	i;
	int	j;
	int	k;
	char	**split;

	i = 0;
	k = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i += 1;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i += 1;
		split[k][j] = '\0';
		k += 1;
	}
	split[k] = NULL;
	return (split);
}

#include <stdio.h>
int	main(void)
{
	int		j;
	char	**array_prime;

 	j = 0;
	array_prime = ft_split("tripouille qqwe eq");	
	while (array_prime[j])
	{
		printf("sprite :) --> %s\n", array_prime[j]);
		j++;
	}
}
