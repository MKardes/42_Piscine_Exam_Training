int     ft_atoi(const char *str)
{
        int     i;
        int     temp;
	int	a;

	a = 1;
        temp = 0;
        i = 0;
        while (str[i] <= 13 && str[i] >= 9 || str[i] == ' ')
                i++;
	if (str[i] == '-' || str[i] == '+')
                {
                        if (str[i] == '-')
                               a = -1;
                        i++;
                }
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
                temp = temp * 10 + str[i++] - 48;
        return(temp * a);
}
