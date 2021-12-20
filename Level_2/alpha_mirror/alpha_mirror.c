#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	i;

		i = 0;
		while(av[1][i] != '\0')
		{
			if (av[1][i] <= 'Z' && av[1][i] >= 'N')
				ft_putchar('M' - (av[1][i] - 'N'));
			else if (av[1][i] <= 'M' && av[1][i] >= 'A')
				ft_putchar('N' - (av[1][i] - 'M'));
			else if (av[1][i] <= 'm' && av[1][i] >= 'a')
				ft_putchar('n' - (av[1][i] - 'm'));
			else if (av[1][i] <= 'z' && av[1][i] >= 'n')
				ft_putchar('m' - (av[1][i] - 'n'));
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
