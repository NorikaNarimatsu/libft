/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnarimat <nnarimat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:45:04 by nnarimat          #+#    #+#             */
/*   Updated: 2023/10/12 10:52:20 by nnarimat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size <= dst_len)
		return (size + ft_strlen(src));
	while (src[i] && (dst_len + i) < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h> // Include the string.h header for strlcat
#include <stddef.h>

	//the destinatio does not jave a null terminater
	//[5]HELLO SIZE -> WITH, LEN -> WITHOUT NULL

int main()
{
	char dst1[20] = "Hello, ";
	const char *src = "world!";
	size_t size = sizeof(dst1);

	// Using the standard strlcat function
	size_t result_std = strlcat(dst1, src, size);

	char dst2[20] = "Hello, ";
	size_t result_ft = ft_strlcat(dst2, src, size);

	printf("Result of strlcat: %s\n", dst1);
	printf("Result of ft_strlcat: %s\n", dst2);
	return 0;
}
*/
