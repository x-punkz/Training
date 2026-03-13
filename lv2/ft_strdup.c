#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*copy;

	i  = 0;
	copy = malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

#include <stdio.h>
int	main(void)
{
	char	*str;
	char	*copy;

	str = "coca-cloaca";
	copy = ft_strdup(str);
	printf("-> %s\n", copy);
}
