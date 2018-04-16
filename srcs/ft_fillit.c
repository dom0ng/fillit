/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 16:38:27 by julin             #+#    #+#             */
/*   Updated: 2017/12/16 16:38:29 by julin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_errors(int fd)
{
	char	**tab;
	char	*shapes;
	int		nb_shape;

	nb_shape = 0;
	if ((shapes = ft_read(fd)) == NULL)
		return (1);
	if (ft_check_format(shapes, &nb_shape))
		return (1);
	if ((tab = ft_convert(shapes, nb_shape)) == NULL)
		return (1);
	if (ft_check_block(tab))
		return (1);
	if (ft_init(tab, nb_shape))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;

	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
		{
			ft_putstr("error\n");
			return (0);
		}
		if (ft_errors(fd))
		{
			ft_putstr("error\n");
			close(fd);
			return (0);
		}
		close(fd);
	}
	else
		ft_putstr("usage: ./fillit target_file\n");
	return (0);
}
