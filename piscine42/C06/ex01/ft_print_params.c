/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 10:28:27 by mdinc             #+#    #+#             */
/*   Updated: 2024/08/31 10:28:30 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < ac)
	{
		while (av[j][i] != '\0')
		{
			ft_putchar(av[j][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		j++;
	}
}
