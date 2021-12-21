int	max(int *tab, unsigned int len)
{
	int	a;
	int	i;

	if (!tab)
		return (0);
	i = 0;
	a = tab[0];
	while (tab[i] != '\0' && i < len)
	{
		if (a <= tab[i])
		{
			a = tab[i];
		}
		i++;
	}
	return (a);
}
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	int	*a;
	a = (int *) malloc(sizeof(int) * 5 + 1);
	a[0] = 1;
	a[1] = 32;
	a[2] = 12;
	a[3] = 2141;
	a[4] = 32;
	printf("%d",max(a, 5));
}
