/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:13:16 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/09 12:13:20 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

static int		ft_check_aggresive(t_map *m, t_player *pl)
{
	int		y;
	int		x;
	int		i;

	y = m->m_col;
	while (--y > 0)
	{
		x = m->m_row;
		while (--x > 0)
		{
			if (m->map[y][x] == pl->name)
			{
				i = -1;
				while (++i < m->m_row)
					if (m->map[y][i] == 'O' || m->map[y][i] == 'X')
						return (1);
			}
			if (m->map[0][y] == pl->name ||
				m->map[m->m_col - 1][x] == pl->name)
				return (0);
		}
	}
	return (0);
}

void			ft_get_info(t_player *pl, t_map *m)
{
	char	*line;
	int		i;

	i = -1;
	get_next_line(0, &line);
	while (line[++i])
		if (ft_isdigit(line[i]))
			m->nbr.nbr = ft_atoi(&line[i]);
	pl->name = (m->nbr.nbr == 1) ? 'O' : 'X';
	get_next_line(0, &line);
	i = -1;
	while (!ft_isdigit(line[i]))
		++i;
	m->m_col = ft_atoi(&line[i]);
	while (ft_isdigit(line[i]))
		++i;
	m->m_row = ft_atoi(&line[i++]);
}

int				main(void)
{
	t_player	pl;
	t_piece		p;
	t_map		m;
	int			i;

	ft_get_info(&pl, &m);
	while (1)
	{
		if (m.nbr.nbr == 1 || m.nbr.nbr == 2)
		{
			i = -1;
			ft_get_map(&m, &p);
			while (++i < (&m)->m_col && i < (&m)->m_row)
				if ((&m)->map[i][0] == (&pl)->name &&
					(((&m)->map[0][i] == 'O' || (&m)->map[0][i] == 'X') &&
					(&m)->map[i][(&m)->m_row - 1] == (&pl)->name))
					ft_place_left(&m, &pl, &p);
			(ft_check_aggresive(&m, &pl)) ?
			ft_move_top(&m, &pl, &p) : ft_move_bot(&m, &pl, &p);
			if ((&pl)->cantmv == 1)
				ft_move_bot(&m, &pl, &p);
			if ((&pl)->finish == 1)
				return (1);
		}
	}
}
