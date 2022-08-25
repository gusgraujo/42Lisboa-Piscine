/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:04:30 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/24 21:10:51 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	length_str(int size, char **strs, char *sep)
{
	int	length;
	int	i;
	int	j;

	j = 0;
	length = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			i++;
		length = length + i;
		j++;
	}
	i = 0;
	while (sep[i])
		i++;
	length = length + (i * (size - 1));
	return (length);
}

int	ft_strcat(char **dest, char *src, int b)
{
	int	i;

	i = 0;
	while (src[i])
	{
		(*dest)[b] = src[i];
		i++;
		b++;
	}
	return (b);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		j;
	int		i;

	j = 0;
	i = 0;
	s = malloc((length_str(size, strs, sep) + 1) * sizeof(char));
	if (size == 0)
		return ((char *)malloc(1));
	if (s == 0)
		return (0);
	while (j < size)
	{
		i = ft_strcat(&s, strs[j], i);
		if (j == (size - 1))
			break ;
		i = ft_strcat(&s, sep, i);
		j++;
	}
	s[i] = '\0';
	return (s);
}
