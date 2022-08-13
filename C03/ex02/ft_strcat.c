/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:15:58 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/13 21:27:24 by gugoncal         ###   ########.fr       */
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
	char	*str;
	int		size_dest;
	int		i;

	i = 0;
	size_dest = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[i + size_dest] = src[i];
		i++;
	}
	dest[i + size_dest] = '\0';
	return (dest);
}
