/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:07:08 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 10:07:17 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int		i;
	unsigned char		*d;
	unsigned char		*s;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
	return (dst);
}
