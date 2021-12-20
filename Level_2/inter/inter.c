#include <unistd.h>

int	isdouble(char	s, char	*str, int a)
{
	int	i;

	i = 0;
	while (i < a)
	{
		if (str[i] == s)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	i;
		int	i1;

		i = 0;
		while (av[1][i] != '\0')
		{
			i1 = 0;
			while(av[2][i1] != '\0')
			{
				if (av[1][i] == av[2][i1])
				{
					if(isdouble(av[1][i], av[1], i))
					{
						write(1, &av[1][i], 1);
						break ;
					}
				}
				i1++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
