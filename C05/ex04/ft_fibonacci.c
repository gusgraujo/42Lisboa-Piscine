/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 22:59:57 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/18 23:10:11 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{	
	int	value;

	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index > 0)
	{
		value = ft_fibonacci(index - 1) + ft_fibonacci(index -2);
		return (value);
	}
	else
	{
		return (-1);
	}
	return (value);
}
