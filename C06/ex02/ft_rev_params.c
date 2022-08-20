/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:57:33 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/20 23:29:09 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;
	int	i;

	count = argc - 1;
	i = 0;
	if (argc > 1)
	{
		while (count > 0)
		{
			i = 0;
			while (argv[count][i] != '\0')
			{
				write(1, &argv[count][i], 1);
				i++;
			}
			write(1, "\n", 1);
			count--;
		}
	}
	return (0);
}