#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	i;
		int	i1;

		i = 0;
		while (av[1][i] != '\0')
		{
			i1 = 1;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				i1 = av[1][i] - 96;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				i1 = av[1][i] - 64;
			while (i1 > 0)
			{
				write(1, &av[1][i], 1);
				i1--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
