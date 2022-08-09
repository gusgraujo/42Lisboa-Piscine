/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:11:03 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/09 10:41:18 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(char first, char second, char third)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(third);
	if (first != '7' || second != '8' || third != '9')
	{
		ft_putchar(comma);
		ft_putchar(space);
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
				ft_print_number(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}
