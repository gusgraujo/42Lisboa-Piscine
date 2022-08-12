/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:27:10 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/12 12:54:23 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	res;

	count = 0;
	res = 0;
	while (src[count] != '\0')
		count++;
	if (size < 1)
	{
		while (src[res] != '\0' && res < (size - 1))
		{
			dest[res] = src[res];
			res++;
		}
		dest[res] = '\0';
	}
	return (count);
}
