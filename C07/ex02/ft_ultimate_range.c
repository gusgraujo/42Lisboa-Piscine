/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:15:03 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/24 18:59:54 by gugoncal         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
