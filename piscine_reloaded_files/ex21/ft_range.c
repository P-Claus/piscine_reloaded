/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:20:04 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/13 18:35:33 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	counter;
	int	*ptr;

	length = (max - min) - 1;
	counter = 0;
	ptr = (int *) malloc(length * sizeof(int));
	if (ptr == 0)
		return (0);
	if (min >= max)
		return (0);
	while (min < max -1)
		*(ptr + counter++) = ++min;
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min, max, counter, len;
	int	*array;

	min = 10;
	max = 3;
	counter = 0;
	len = (max - min) - 1;
	array = ft_range(min, max);
	if (array == NULL)
		printf("NULL");

	while (counter < len)
	{
		printf("%d\n", *(array + counter));
		counter++;
	}

}*/
