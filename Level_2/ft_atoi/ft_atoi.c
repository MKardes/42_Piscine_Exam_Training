int     ft_atoi(const char *str)
{
        int     i;
        int     temp;

        temp = 0;
        i = 0;
        while (str[i] <= 13 && str[i] >= 7)
                i++;
        if (str[i] == '-' || str[i] '+')
                {
                        if (str[i] == '-')
                               temp*=-1;
                        i++;
                }
        while (str[i] >= '0' && str[i] <= '9')
                temp = temp * 10 + str[i] - 48;
        return(temp);

}

#include <stdio.h>
int     main()
{
        char *asd = " 1213a12";
        printf("%d",ft_atoi(asd));
}
