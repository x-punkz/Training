#include <unistd.h>

int	main(int argc, char **argv)
{
	/* LOGICA
	 * Ao encontrar um caracter maisculo, acrescenta + 32 nele para
	 * torna-lo minusculo e printa um "_", depois, continua printando
	 * o resto e aumenta o incrementador.
	 * */
	int	i;
	char	*str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
				write(1, "_", 1);
			}
			write(1, &str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
