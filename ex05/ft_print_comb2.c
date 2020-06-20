/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:18:37 by msibiya           #+#    #+#             */
/*   Updated: 2020/06/20 08:25:57 by msibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);

}

void ft_print_comb()
{
	char a;
	char b;
	a = '0';
	while( a <= '9' )
	{
		b  = a + 1;
		while(b <= '9')
		{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(' ');
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(',');
				ft_putchar(' ');
				b = b + 1;
		}
		a = a + 1;
	}
}
