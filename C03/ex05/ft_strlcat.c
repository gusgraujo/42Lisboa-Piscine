/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:51:01 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/13 23:17:44 by gugoncal         ###   ########.fr       */
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
	unsigned int		size_dest;
	unsigned int		size_src;
	unsigned int		i;

	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size == 0)
		return (0);
	while (src[i] != '\0' && dest[i] != '\0' && src[i] != 0
		&& i + size_dest < size - 1)
	{
		dest[i + size_dest] = src[i];
		i++;
	}
	if (i < size)
		dest[size + i] = '\0';
	if (size_dest > size)
		return (size_src + size);
	else
		return (size_src + size);
}
