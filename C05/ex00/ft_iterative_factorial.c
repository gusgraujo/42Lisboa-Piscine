/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:46:54 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/17 23:10:34 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (nb == 0 || nb <= 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
