/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 23:32:55 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/17 00:45:43 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_verify(char n, char *base)
{
	int	i;

	i = 0;
	if (n == '\n' || n == '\t' || n == '\v' || n == '\f' || n == '\r'
		|| n == ' ' || n == '+' || n == '-')
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == n)
			return (-1);
		i++;
	}
	return (0);
}

int	ft_trans_num(char c, char *base, int mult, int nbr)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (nbr + (mult * i));
		i++;
	}
	return (nbr);
}

int	ft_verify(char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{
		if (base[count] == '+' || base[count] == '-'
			|| base[count] == base[count + 1] || base[count] == ' '
			|| base[count] == '\n' || base[count] == '\t'
			|| base[count] == '\v' || base[count] == '\f'
			|| base[count] == '\r')
			return (0);
		count++;
	}
	if (count <= 1)
		return (0);
	return (1);
}

int	ft_atoi(char *str, char *base, int size, int num)
{
	int	i;
	int	sign;
	int	res;
	int	mult;

	i = num - 1;
	sign = 1;
	res = 0;
	mult = 1;
	while (i >= 0)
	{
		if (str[i] == '-')
			sign *= -1;
		if (ft_base_verify(str[i], base) == -1)
		{
			res = ft_trans_num(str[i], base, mult, res);
			mult *= size;
		}
		i--;
	}
	return (res * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	if (ft_verify(base) == 0)
		return (0);
	while (base[size] != '\0')
		size++;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (ft_atoi(str, base, size, i));
}
