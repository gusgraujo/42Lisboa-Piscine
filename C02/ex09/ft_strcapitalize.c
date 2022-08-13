/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:18:44 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/13 13:30:58 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[count] != '\0')
	{
		if (i == 0 && (str[count] >= 'a' && str[count] <= 'z'))
		{
			str[count] -= 32;
			i++;
		}
		else if (i > 0 && (str[count] >= 'A' && str[count] <= 'Z'))
			str[count] += 32;
		else if ((str[count] < '0') || (str[count] > '9' && str[count] < 'A')
			|| (str[count] > 'Z' && str[count] < 'a') || (str[count] > 'z'))
			i = 0;
		else
			i++;
		count++;
	}
	return (str);
}
