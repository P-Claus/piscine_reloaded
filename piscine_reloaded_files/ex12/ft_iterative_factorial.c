/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:52:33 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/11 15:15:08 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
		return (0);
	while (nb > 0)
	{
		result *= nb--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("The final result is: %d", ft_iterative_factorial(5));
}*/
