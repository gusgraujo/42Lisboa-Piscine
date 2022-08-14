/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:51:01 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/14 16:31:19 by gugoncal         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;

	i = ft_strlen(dest);
	d = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	while (src[d] != '\0' && i + 1 < size)
	{
		dest[i] = src[d];
		i++;
		d++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}
