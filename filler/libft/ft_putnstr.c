/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:50:21 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 09:50:24 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putnstr(const char *s, size_t n)
{
	size_t		len;

	len = ft_strlen(s);
	write(1, s, ft_min(len, n));
}
