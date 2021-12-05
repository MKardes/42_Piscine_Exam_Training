#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	i;
		char	a;

		i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'm')
				a = av[1][i] + 13;
			else if (av[1][i] >= 'A' && av[1][i] <= 'M')
				a = av[1][i] + 13;
			else if (av[1][i] >= 'n' && av[1][i] <= 'z')
				a = av[1][i] - 13;
			else if (av[1][i] >= 'N' && av[1][i] <= 'Z')
				a = av[1][i] - 13;
			else
				a = av[1][i];
			write(1, &a, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
