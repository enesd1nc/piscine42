/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:36:27 by mdinc             #+#    #+#             */
/*   Updated: 2024/08/28 15:36:28 by mdinc            ###   ########.fr       */
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

	i = 0;
	if (ac >= 1)
	{
		while (av[0][i] != '\0')
		{
			ft_putchar(av[0][i]);
			i++;
		}
		ft_putchar('\n');
	}
}
