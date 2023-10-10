/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:22:32 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/10 22:28:52 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	number;

	number = '0';
	while (number <= '9')
		ft_putchar(number++);
}

int	main(void)
{
	ft_print_numbers();
}
