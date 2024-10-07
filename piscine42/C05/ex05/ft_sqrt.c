/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:22:50 by mdinc             #+#    #+#             */
/*   Updated: 2024/08/31 16:22:51 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	k;

	k = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (k * k <= nb)
	{
		while (k * k == nb)
		{
			return (k);
		}
		k++;
	}
	return (0);
}
