#include <unistd.h>

int	isdouble(char *str, char a, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == a)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = -1;
		while (av[1][++i] != '\0')
		{
			if (isdouble(av[1], av[1][i], i))
				write(1, &av[1][i], 1);
		}
		j = -1;
		while(av[2][++j] != '\0')
		{
			if (isdouble(av[2], av[2][j], j) &&
				isdouble(av[1], av[2][j], i))
				write(1, &av[2][j], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
