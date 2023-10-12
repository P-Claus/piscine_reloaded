/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:45:33 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/12 10:50:25 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*string;

	string = "Hello friends";
	printf("The length of the string is: %d", ft_strlen(string));
}*/
