/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:51:37 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 09:51:42 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}
