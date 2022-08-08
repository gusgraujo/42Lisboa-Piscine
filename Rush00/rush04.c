/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:51:42 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/07 15:12:16 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_print_colums(int x, char c1, char c2, char c3)
{
	int		col;

	col = 1;
	while (col <= x)
	{
		if (col != 1 && col != x)
		{
			putchar(c2);
			col++;
		}
		if (col == 1)
		{
			putchar(c1);
			col++;
		}
		if (col == x)
		{
			putchar(c3);
			col++;
		}
	}
	putchar('\n');
}

void	ft_print_lines(int x, int y)
{
	int		line;

	line = 1;
	while (line <= y)
	{	
		if (line == 1)
		{	
			ft_print_colums(x, 'A', 'B', 'C');
			line++;
		}
		else if (line == y)
		{
			ft_print_colums(x, 'C', 'B', 'A');
			line++;
		}
		else if (line != 1 && line != y)
		{
			ft_print_colums(x, 'B', ' ', 'B');
			line++;
		}
	}
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		ft_print_lines(x, y);
	}
}
