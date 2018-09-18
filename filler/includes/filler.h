/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:14:55 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/09 12:15:01 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include <fcntl.h>
# include "../libft/includes/libft.h"

typedef struct	s_player
{
	int			nbr;
	int			cantmv;
	int			finish;
	char		name;

}				t_player;

typedef struct	s_map
{
	int			m_col;
	int			m_row;
	int			lines;
	t_player	nbr;
	int			x;
	int			y;
	int			tmp;
	char		*m_join;
	char		**map;
}				t_map;

typedef struct	s_piece
{
	int			p_col;
	int			p_row;
	int			lines;
	int			x;
	int			y;
	int			i;
	int			j;
	int			p_count;
	char		*p_join;
	char		**piece;
}				t_piece;

void			ft_move_top(t_map *m, t_player *pl, t_piece *p);
void			ft_move_bot(t_map *m, t_player *pl, t_piece *p);
void			ft_place_left(t_map *m, t_player *pl, t_piece *p);
void			ft_get_map(t_map *m, t_piece *p);
int				get_next_line(int const fd, char **line);

#endif
