/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_game_board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:14:22 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/09 12:14:25 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/filler.h"

void			ft_get_piece(t_piece *p)
{
	char	*line;

	p->p_join = "\0";
	p->lines = -1;
	get_next_line(0, &line);
	p->p_col = ft_atoi(&line[6]);
	p->p_row = ft_atoi(&line[8]);
	while (++p->lines < p->p_col && get_next_line(0, &line))
		p->p_join = ft_strjoin(ft_strjoin(p->p_join, line), "\n");
	p->piece = ft_strsplit(p->p_join, '\n');
}

void			ft_get_map(t_map *m, t_piece *p)
{
	char	*line;

	m->m_join = "\0";
	m->lines = 0;
	while (m->lines < m->m_col && get_next_line(0, &line))
	{
		if (ft_isdigit(line[0]))
		{
			m->m_join = ft_strjoin(ft_strjoin(m->m_join, &line[4]), "\n");
			m->lines++;
		}
	}
	m->map = ft_strsplit(m->m_join, '\n');
	ft_get_piece(p);
}
