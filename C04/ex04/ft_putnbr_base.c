/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:03:14 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/16 23:08:51 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	validate_duplicates(char *base)
{	
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_validate_base(char *base)
{
	int		i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || validate_duplicates(base))
		{
			return (0);
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_print_base_num(int nbr, char *base, int size)
{
	int		n;
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_print_base_num(n / size, base, size);
	c = base[n % size];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{	
	int	base_size;

	base_size = ft_strlen(base);
	if (ft_validate_base(base) == 1)
	{
		ft_print_base_num(nbr, base, base_size);
	}
}
