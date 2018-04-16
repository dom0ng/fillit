/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grow_all_shape.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 16:39:58 by julin             #+#    #+#             */
/*   Updated: 2017/12/16 16:40:01 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_grow_all_shape(char **tab, int n)
{
	int	i;
	int j;

	if (n <= 0)
		return (tab);
	i = 0;
	j = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			while (tab[i][j] == '#')
				j++;
			if (tab[i][j])
				if (!(tab[i] = ft_insert_char(tab[i], n, '.', j)))
					return (NULL);
			while (tab[i][j] == '.')
				j++;
		}
		i++;
	}
	return (tab);
}
