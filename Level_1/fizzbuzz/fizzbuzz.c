#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(void)
{
	int	a;

	a = 1;
	while (a <= 100)
	{
		if (a % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (a % 5 == 0)
			write(1, "buzz", 4);
		else if (a % 3 == 0)
			write(1, "fizz", 4);
		else
			if (a < 10)
				ft_putchar(a + 48);
			else
			{
				ft_putchar(a / 10 + 48);
				ft_putchar(a % 10 + 48);
			}
		write(1, "\n", 1);
		a++;
	}
}
