/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:10:30 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/23 23:54:41 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;
	int	index;

	index = min;
	i = 0;
	res = malloc(max - min);
	if (min >= max)
		return (0);
	if (res == NULL)
		return (0);
	while (index < max)
	{
		res[i] = index;
		index ++;
		i++;
	}
	return (res);
}
