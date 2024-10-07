/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:44:04 by mdinc             #+#    #+#             */
/*   Updated: 2024/09/05 10:44:06 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	total_len(int size, char **strs, int sep_len)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total + (size - 1) * sep_len);
}

void	join_strings(char *result, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	sep_len;

	i = 0;
	j = 0;
	k = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i < size -1)
		{
			j = 0;
			while (j < sep_len)
				result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	char	*res;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_length = total_len(size, strs, ft_strlen(sep));
	res = (char *)malloc((total_length + 1) * sizeof(char));
	if (!res)
		return (0);
	join_strings(res, size, strs, sep);
	return (res);
}
