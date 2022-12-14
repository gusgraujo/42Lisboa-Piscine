/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:21:24 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/15 14:56:36 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				value;

	i = 0;
	value = 0;
	while ((i < n) && !value && (s1[i] != '\0') && (s2[i] != '\0'))
	{	
		value = ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n && !value && (s1[i] == '\0' || s2[i] == '\0'))
		value = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (value);
}
