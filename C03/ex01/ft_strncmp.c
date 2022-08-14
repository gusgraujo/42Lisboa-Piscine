/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:21:24 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/14 15:21:37 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char*s1, char*s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && i < n - 1 && s2[i] != '\0' && s1[i] != '\0')
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
