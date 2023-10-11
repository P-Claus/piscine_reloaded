/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:54:48 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/11 21:20:15 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb--;
	if (nb <= 0)
		return (result);
	else
		result *= ft_recursive_factorial(nb);
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("The result is: %d", ft_recursive_factorial(5));
}*/
