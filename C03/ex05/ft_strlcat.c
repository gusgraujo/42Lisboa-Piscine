/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:51:01 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/15 15:21:44 by gugoncal         ###   ########.fr       */
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
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	i;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size < dst_len + 1)
		return (size + src_len);
	if (size > dst_len + 1)
	{
		while (src[i] != '\0' && dst_len + 1 + i < size)
		{
			dest[dst_len + i] = src[i];
			i++;
		}
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
