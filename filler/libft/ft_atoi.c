/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:30:02 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 09:30:09 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	long	nbr;

	sign = 1;
	nbr = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\f' || *str == '\r' || *str == '\v')
		str++;
	if (*str == '+' || *str == '-')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (sign * nbr);
}
