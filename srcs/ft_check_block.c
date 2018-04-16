/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_block.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 16:38:08 by julin             #+#    #+#             */
/*   Updated: 2017/12/30 20:02:08 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_block(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (ft_strcmp(tab[i], "##...#...#") != 0
		&& ft_strcmp(tab[i], "#...#...##") != 0
		&& ft_strcmp(tab[i], "###.#") != 0 && ft_strcmp(tab[i], "##..##") != 0
		&& ft_strcmp(tab[i], "#...##...#") != 0
		&& ft_strcmp(tab[i], "##.##") != 0 && ft_strcmp(tab[i], "##...##") != 0
		&& ft_strcmp(tab[i], "#..##..#") != 0
		&& ft_strcmp(tab[i], "####") != 0 && ft_strcmp(tab[i], "#.###") != 0
		&& ft_strcmp(tab[i], "#...#...#...#") != 0
		&& ft_strcmp(tab[i], "#...##..#") != 0
		&& ft_strcmp(tab[i], "###..#") != 0
		&& ft_strcmp(tab[i], "#..##...#") != 0
		&& ft_strcmp(tab[i], "#..###") != 0
		&& ft_strcmp(tab[i], "##..#...#") != 0
		&& ft_strcmp(tab[i], "###...#") != 0
		&& ft_strcmp(tab[i], "#...#..##") != 0
		&& ft_strcmp(tab[i], "#...###") != 0)
			return (1);
		i++;
	}
	return (0);
}
