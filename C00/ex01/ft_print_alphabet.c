/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 01:02:05 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/08 01:02:48 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabetic;

	alphabetic = 'a';
	while (alphabetic <= 'z')
	{
		write(1, &alphabetic, 1);
		alphabetic++;
	}
}
