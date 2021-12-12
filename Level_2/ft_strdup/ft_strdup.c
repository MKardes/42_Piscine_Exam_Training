#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	*s;

	i = 0;
	while(src[i] != '\0')
		i++;
	s = (char *) malloc(sizeof(char) * i + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
