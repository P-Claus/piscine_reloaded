/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:17:00 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/12 17:54:26 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	len;
	int	index;

	len = 1;
	index = 0;
	while (len < argc)
	{
		while (argv[len][index] != '\0')
			ft_putchar(argv[len][index++]);
		index = 0;
		ft_putchar('\n');
		len++;
	}
}
