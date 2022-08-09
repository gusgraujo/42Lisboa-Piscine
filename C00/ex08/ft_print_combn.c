/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:16:22 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/09 09:55:13 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putvet(int arr[], int n)
{
	int		count;

	count = 0;
	while (count < n)
	{
		ft_putchar(arr[count] + '0');
		count++;
	}
}

int	ft_get_index(int arr[], int n)
{
	int	c;
	int	max;

	c = 0;
	max = 10 - n;
	while (c < n)
	{
		if (arr[c] == max)
			return (c - 1);
		if (c == (n - 1) && arr[c] < max)
			return (c);
		c++;
		max++;
	}
	return (-1);
}

void	ft_increment(int arr[], int n, int index)
{
	int	count;

	count = index + 1;
	arr[index]++;
	while (count <= n)
	{
		arr[count] = arr[count - 1] + 1;
		count++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];
	int	count;
	int	pos_index;

	count = 0;
	if (n >= 10 || n <= 0)
		return ;
	else
	{
		while (count < n)
		{
			comb[count] = count;
			count++;
		}
		while (ft_get_index(comb, n) != -1)
		{
			pos_index = ft_get_index(comb, n);
			ft_putvet(comb, n);
			ft_increment(comb, n, pos_index);
			write(1, ", ", 2);
		}
		ft_putvet(comb, n);
	}
}


int main ()
{
	ft_print_combn(5);
}