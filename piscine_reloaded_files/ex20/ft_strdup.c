/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:54:35 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/13 17:51:58 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		counter;
	char	*dst;

	len = ft_strlen(src) + 1;
	counter = 0;
	dst = (char *) malloc(len * sizeof(char));
	if (dst == 0)
		return (0);
	while (*(src + counter) != '\0')
	{
		*(dst + counter) = *(src + counter);
		counter++;
	}
	*(dst + counter) = '\0';
	return (dst);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *src = "hello everybody";

	printf("Using strdup:  %s\n", strdup(src));
	printf("Using ft_strdup:  %s", ft_strdup(src));
}
