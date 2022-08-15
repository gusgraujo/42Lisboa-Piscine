/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:15:58 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/15 15:02:43 by gugoncal         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char*src)
{
	int	size_dest;

	size_dest = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[size_dest] = *src;
		size_dest++;
		src++;
	}
	dest[size_dest] = '\0';
	return (dest);
}
