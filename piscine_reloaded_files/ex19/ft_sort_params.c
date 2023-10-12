/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:59:05 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/12 19:35:18 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		ft_putchar(str[index++]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] == s2[index])
			index++;
		return (s1[index] - s2[index]);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = 1;
	while (x < argc -1)
	{
		y = 1;
		while (y < argc -1)
		{
			if (ft_strcmp(argv[y], argv[y+ 1]) > 0)
				ft_swap(&argv[y], &argv[y+1]);
			y++;
		}
		x++;
	}
	y = 1;
	while (y < argc)
	{
		ft_putstr(argv[y]);
		ft_putchar('\n');
		y++;
	}
	return (0);
}
