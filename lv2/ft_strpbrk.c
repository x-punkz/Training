#include <stdlib.h>
/*
 * Retorna um ponteiro para a letra da s2 q ele encontrou em s1, ou seja
 * move o ponteiro e retorna a posicçao dele, ou null se n encontrar
             ** null precisa de stdlib p funcionar**
 */
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	char *str;

	str = (char *)s1;
	while(*str)
	{
		i  = 0;
		while (s2[i])
		{
			if(s2[i] == *str)
				return (str);
			i++;	
		}
		str++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>
int     main(void)
{	
	printf("minha -> %s\n", ft_strpbrk("hello word", "abc"));
	printf("original -> %s\n", strpbrk("hello word", "abc"));
/*	printf("-> %lu\n", strcspn("hello word", " "));*/
}

