/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:26:59 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/18 22:56:15 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	value;

	value = nb;
	if (value > value * nb)
		return (0);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
		return (value * ft_recursive_power(value, power - 1));
	else
		return (value);
}