/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:10:36 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/05 15:26:26 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabetic;

	alphabetic = 'z';
	while (alphabetic >= 'a')
	{
		write(1, &alphabetic, 1);
		alphabetic--;
	}
}
