/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:13:24 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/09 20:35:05 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	count;

	count = 0;
	while (count < size / 2)
	{
		first = *(tab + count);
		last = *(tab + size - 1 - count);
		*(tab + count) = last;
		*(tab + size - 1 - count) = first;
		count++;
	}
}