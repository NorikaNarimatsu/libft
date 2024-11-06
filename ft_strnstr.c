/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnarimat <nnarimat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:42:19 by nnarimat          #+#    #+#             */
/*   Updated: 2023/10/13 17:39:41 by nnarimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char	*little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
#include <stddef.h>
#include <string.h>
#include <stdio.h>


int main()
{
	const char	*big = "Hello";
	const char	*little = "lo";
	size_t		len;

	len = 5;
	char	*result_ft = ft_strnstr(big, little, len);

	if (result_ft != NULL)
		printf("ft_strnstr result: %s\n",  result_ft);
	else
		printf("ft_strnstr result:
	Substring not found within the specified length.\n");

	return (0);
}

*/
