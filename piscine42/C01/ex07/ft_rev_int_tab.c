/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:22:34 by mdinc             #+#    #+#             */
/*   Updated: 2024/08/20 13:22:36 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	rev;

	a = 0;
	b = size - 1;
	while (a < size / 2)
	{
		rev = tab[a];
		tab[a] = tab[b];
		tab[b] = rev;
		a++;
		b--;
	}
}