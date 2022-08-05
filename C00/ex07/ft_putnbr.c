/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugoncal <gugoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:11:12 by gugoncal          #+#    #+#             */
/*   Updated: 2022/08/05 15:01:44 by gugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    int    temp;
    int    size = 1;

    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb == -2147483648)
    {
        ft_putchar('2');
        nb = 147483648;
    }

    temp = nb;
    while ((temp = temp/ 10) > 0){
       size *= 10;
    }
        
    temp = nb;
    while (size)
    {
        ft_putchar((char)((temp / size)) + 48);
        temp %= size;
        size /= 10;
    }
}


int main(){

    ft_putnbr(402);
}
