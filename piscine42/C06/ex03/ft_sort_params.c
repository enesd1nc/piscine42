/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:13:59 by mdinc             #+#    #+#             */
/*   Updated: 2024/08/31 11:14:00 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)

{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	l;

	l = 0;
	while ((s1[l] == s2[l]) && (s1[l] != '\0') && (s2[l] != '\0'))
		l++;
	return (s1[l] - s2[l]);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	y = 1;
	while (y < argc - 1)
	{
		x = 1;
		while (x < argc -1)
		{
			if (ft_strcmp(argv[x], argv[x + 1]) > 0)
			{
				ft_swap(&argv[x], &argv[x + 1]);
			}
			x++;
		}
		y++;
	}
	x = 1;
	while (x < argc)
	{
		ft_putstr(argv[x]);
		ft_putchar('\n');
		x++;
	}
	return (0);
}
