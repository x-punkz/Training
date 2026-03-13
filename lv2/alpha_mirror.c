#include <unistd.h>

int	main(int argc, char **argv)
{
	/* LOGICA
	 * calcule a posiçao de 'z' ou 'Z' - a letra atual (str[i]) + 'a' ou 'A'
	 * dessa forma, o valor resultante sera o espelho a da letra atual.
	 */
	int	i;
	char	*str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = 'z' - str[i] + 'a';
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = 'Z'- str[i] + 'A';
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
