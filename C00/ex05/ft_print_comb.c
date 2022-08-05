/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:11:03 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/05 15:43:40 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_validate(char first, char second, char third)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	putchar(first);
	putchar(second);
	putchar(third);
	if (first != '7' || second != '8' || third != '9')
	{
		putchar(comma);
		putchar(space);
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '7')
	{
		second = first +1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_validate(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}