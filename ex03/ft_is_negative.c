/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:00:42 by msibiya           #+#    #+#             */
/*   Updated: 2020/06/19 12:49:10 by msibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative()
{
	int n;
	n = 0;
	while(n >= -2147483648 && n <= 2147483647)
	{
		if(n < 0)
		ft_putchar('N');
		else if( n == 0 || n == '\0' || n > 0)
			ft_putchar('P');
		break;
	}
}
