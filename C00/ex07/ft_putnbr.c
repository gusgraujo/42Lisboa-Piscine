/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:11:12 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/06 00:39:46 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_find_decimals(int nb)
{
	int		size;

	size = 0;

	return	size;
}

void	ft_putnbr(int nb)
{
	int		temp;
	int		size;

	size = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putchar('2');
		nb = 147483648;
	}
	temp = nb;
	temp = temp / 10;
	while (temp > 0)
	{
		size *= 10;
		temp = temp / 10;
	}
	temp = nb;
	while (size)
	{
		ft_putchar((char)((temp / size)) + 48);
		temp %= size;
		size /= 10;
	}
}


int main(){

    ft_putnbr(42);
}
