/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 23:31:54 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/21 23:01:25 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **s1, char **s2)
{
	char	*a;

	a = *s1;
	*s1 = *s2;
	*s2 = a;
}

void	ft_putchar_break(char **args, int size, int o)
{
	int	i;

	while (o < size)
	{
		i = 0;
		while (args[o][i])
			i++;
		write(1, args[o], i);
		write(1, "\n", 1);
		o++;
	}
}

int	main(int size, char **args)
{
	int	i;
	int	j;

	j = 1;
	if (size < 2)
		return (0);
	while (j < size - 1)
	{
		i = 0;
		if (args[j][i] == args[j + 1][i])
		{
			while ((args[j][i] || args[j + 1][i])
				&& (args[j][i] == args[j + 1][i]))
				i++;
		}
		if (args[j][i] > args[j + 1][i])
		{
			ft_swap(&args[j], &args[j + 1]);
			j = 0;
		}
		j++;
	}
	ft_putchar_break(args, size, 1);
}
