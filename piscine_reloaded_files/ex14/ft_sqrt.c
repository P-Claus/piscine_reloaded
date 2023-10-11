/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:30:03 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/11 21:38:40 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	num;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	num = 2;
	if (nb >= 2)
	{
		while (num * num <= nb)
		{
			if (num * num == nb)
				return (num);
			num++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("The result is: %d\n", ft_sqrt(25));
	printf("The result is: %d\n", ft_sqrt(0));
	printf("The result is: %d\n", ft_sqrt(1));
	printf("The result is: %d\n", ft_sqrt(5678));
	printf("The result is: %d\n", ft_sqrt(10));
	printf("The result is: %d\n", ft_sqrt(2147483647));
	printf("The result is: %d\n", ft_sqrt(100));
}*/
