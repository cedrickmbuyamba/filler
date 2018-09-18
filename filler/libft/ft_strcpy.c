/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:55:36 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 09:56:01 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned int	i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (dst);
}
