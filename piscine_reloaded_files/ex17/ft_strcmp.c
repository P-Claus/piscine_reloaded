/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:54:12 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/12 17:12:22 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2 [c]) && (s1[c] != '\0' || s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello my gfhdjsklq";
	s2 = "Hello my gfhqds";

	printf("The value of ft_strcmp is: %d\n", ft_strcmp(s1, s2));
	printf("The value of strcmp is: %d", strcmp(s1, s2));
}*/
