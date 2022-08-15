/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:50:50 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/15 20:15:51 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char*str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{	
		count++;
		str++;
	}
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d;

	i = 0;
	d = 0;
	while (dest[i] != '\0')
		i++;
	while (src[d] != '\0' && d < nb)
	{
		dest[i + d] = src[d];
		d++;
	}
	dest[i + d] = '\0';
	return (dest);
}
