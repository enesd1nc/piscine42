/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:31:39 by mdinc             #+#    #+#             */
/*   Updated: 2024/08/24 18:31:45 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*kucuk(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	bayrak;

	i = 0;
	bayrak = 1;
	kucuk(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (bayrak == 1)
				str[i] -= 32;
			bayrak = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			bayrak = 0;
		else
			bayrak = 1;
		i++;
	}
	return (str);
}
