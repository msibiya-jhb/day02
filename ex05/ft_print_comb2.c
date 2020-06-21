/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:18:37 by msibiya           #+#    #+#             */
/*   Updated: 2020/06/21 12:40:42 by msibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);

}

void ft_print_comb2()
{
	char a;
	char b;
	a = 0;
		while(a < 99 )
		{ 
			b= a + 1;
			while(b <= 99)
			{
				ft_putchar(a/10 + '0');
				ft_putchar(a%10 + '0');
				ft_putchar(' ');
				ft_putchar(b/10 + '0');
				ft_putchar(b%10 + '0');
				ft_putchar(',');
				ft_putchar(' ');
				b++;
					}
			a = a + 1;
			}
}

