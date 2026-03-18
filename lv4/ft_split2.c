#include <stdio.h>
#include <stdlib.h>

int	c_word(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i] != '\0')
			word++;
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	return (word);

}

char	*populate(char *str)
{
	int	i;
	char	*word;
	
	i = 0;
	while (str[i] != '0')
	{
		
	}
}

char	**ft_split(char *str)
{
	char	**matriz;
	int	j;
	int	size;

	j = 0;
	len = c_word(str);
	matriz = malloc((sizeof(char *) * size) + 1);
	if (!matriz)
		return (NULL);
	while (j < size)
	{
		matriz[j] = populate(str);
		j++;
	}
	matriz[j] = NULL;
	printf("%d\n", c_word(str));
	return (matriz);
}

int	main(void)
{
	int		j;
	char	**array_prime;

 	j = 0;
	array_prime = ft_split("tripouille qqwe eq");
	if (!array_prime)
		printf("NULL\n");
	else
	{	
		while (array_prime[j])
		{
			printf("sprite :) --> %s\n", array_prime[j]);
			j++;
		}
	}
}
