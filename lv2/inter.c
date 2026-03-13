#include <unistd.h>
int     main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int	i = 0;
	int	j = 0;
	int	search[256] = {};

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		while(s1[i] != '\0')
		{
			j = 0;
			while(s2[j] != '\0')
			{
				if (s1[i] == s2[j] && !search[(int)s2[j]])
				{
					search[(int)s2[j]] = 1;
					write (1, &s2[j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
}

