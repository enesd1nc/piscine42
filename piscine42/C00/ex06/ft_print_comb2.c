/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:29:33 by mdinc             #+#    #+#             */
/*   Updated: 2024/08/17 14:11:01 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			ft_putchar((a / 10) + 48);
			ft_putchar((a % 10) + 48);
			ft_putchar(' ');
			ft_putchar((b / 10) + 48);
			ft_putchar((b % 10) + 48);
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
