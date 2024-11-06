/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnarimat <nnarimat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:26:48 by nnarimat          #+#    #+#             */
/*   Updated: 2023/10/14 19:17:13 by nnarimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char *ft_itoa_helper(char *temp, int i)
{
    char    *res;
    printf("%d\n", i);
    res = ft_calloc(i + 1, sizeof(char));
    printf("%s\n", res);
    if (!res)
        return (0);
    printf("before:\t%c\n", res[i]);
    res[i] = '\0';
    printf("after:\t%c\n", res[i]);
    while (--i >= 0)
        res[ft_strlen(temp) - i - 1] = temp[i];
    return (res);
}
char    *ft_itoa(int n)
{
    long    nbr;
    char    temp[20];
    int     sign;
    int     i;
    i = 0;
    printf("%d\n", n);
    nbr = n;
    printf("%ld\n", nbr);
    ft_bzero(temp, 20);
    if (nbr < 0)
    {
        nbr *= -1;
        sign = -1;
    }
    if (nbr == 0)
        temp[i++] = '0';
    while (nbr > 0)
    {
        temp[i++] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
    if (sign == -1)
        temp[i++] = '-';
    return (ft_itoa_helper(temp, i));
}
int main(void)
{
    int     nbr = -2147483648;
    char    *result;
    result = ft_itoa(nbr);
    printf("Result:\t%s", result);
    return (0);
}

// static int	ft_digit(long int i)
// {
// 	int	count;

// 	count = 0;
// 	if (i == 0)
// 		return (1);
// 	if (i < 0)
// 	{
// 		i *= -1;
// 		count++;
// 	}
// 	while (i > 0)
// 	{
// 		i /= 10;
// 		count++;
// 	}
// 	printf("%d\n", count);
// 	return (count);
// }

// char	*ft_itoa(int n)
// {
// 	char		*str;
// 	int			i;
// 	long int	nb;

// 	nb = n;
// 	i = ft_digit(nb);
// 	str = ft_calloc(i + 1, sizeof(char));
// 	if (!str)
// 		return (0);
// 	str[i--] = '\0';
// 	if (nb == 0)
// 		str[0] = '0';
// 	if (nb < 0)
// 	{
// 		str[0] = '-';
// 		nb = nb * -1;
// 	}
// 	while (nb > 0)
// 	{
// 		str[i--] = nb % 10 + '0';
// 		nb = nb / 10;
// 	}
// 	return (str);
// }

// #include <stdio.h>
//int main()
//{
//	int n = 0;
//	char* result = ft_itoa(n);

//	printf("HERE IS THE RESULT %s\n", result);
//	return 0;
//}
