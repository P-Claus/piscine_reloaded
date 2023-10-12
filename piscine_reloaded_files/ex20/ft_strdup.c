/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:54:35 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/12 22:12:07 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int len;

	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	dst[];
	int	counter;
	int	*ptr;

	ptr = (char*) malloc(ft_strlen(src) * sizeof(char));
	counter = 0;
	while (src[counter] != '\0')
	{
		src[counter] == dst[counter];
		counter++;
	}
	dst[counter] = '\0';
	counter = 0;
	return (dst[counter])
}

#include <stdio.h>
int	main(void)
{
	char src[];

	src = "hello world";
	printf("dst is:  %s", ft_strdup(src));
}
