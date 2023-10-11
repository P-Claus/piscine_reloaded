/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:46:10 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/11 13:50:34 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <unistd.h>
int	main(void)
{
	int	a, b;

	a = 45;
	b = 43;
	write(1, &a, 1);
	write(1, &b, 1);
	ft_swap(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);

}*/