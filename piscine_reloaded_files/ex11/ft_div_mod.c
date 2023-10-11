/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:21:55 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/11 14:48:45 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a, b, div, mod;

	a = 20;
	b = 3;
	div = 0;
	mod = 0;
	printf("a: %d b: %d div: %d mod: %d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d b: %d div: %d mod: %d", a, b, div, mod);

}*/
