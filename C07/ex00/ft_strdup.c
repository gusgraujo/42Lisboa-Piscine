/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:48:45 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/22 17:47:34 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strdup(char	*src)
{
	int	i;
	int	size;
	char *mystring;

	size = ft_strlen(src);
	mystring = (char *)malloc(sizeof(char) * (size + 1))
	while (mystring[i] != NULL)
	{
		
	}
	
}
