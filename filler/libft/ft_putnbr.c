/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:48:53 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 09:49:04 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putnbr(int n)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar('-');
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + 48);
	}
	else
		ft_putchar(nbr + 48);
}
