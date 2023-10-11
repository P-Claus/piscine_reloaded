/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:45:46 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/11 21:56:55 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		ft_putchar(s[counter++]);
}
/*
int	main(void)
{
	ft_putstr("Hello friend");
}*/
