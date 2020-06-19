/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:15:18 by msibiya           #+#    #+#             */
/*   Updated: 2020/06/19 14:52:06 by msibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb()
{
	int i;
	int j;
	int k;
	i = -1;
	
	while(i <= 7)
	{
	   	i = i + 1;
		j = i;
			while(j <= 8)
			{
			   	j = j + 1;
				k = j;
					while(k <= 9)
					{ 
						k = k + 1;
						ft_putchar(i + '0');
						ft_putchar(j + '0');
						ft_putchar(k + '0');
						ft_putchar(',');
						ft_putchar(' ');
					}
			}
	}
}

int main()
{
	ft_print_comb();
	ft_putchar('\n');
	return 0;
}
