/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:42:40 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 09:42:51 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			counter;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	counter = 0;
	if (n == 0)
		return (0);
	while ((str1[counter] == str2[counter]) && (counter + 1 < n))
		counter++;
	return (str1[counter] - str2[counter]);
}
