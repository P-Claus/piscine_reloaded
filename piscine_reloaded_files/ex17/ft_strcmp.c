/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:54:12 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/12 11:14:53 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while ((s1[counter] == s2 [counter]) && (s1[counter] != '\0' || s2[counter] != '\0'))
		counter++;
	return (s1[counter] - s2[counter]);
}

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
}
