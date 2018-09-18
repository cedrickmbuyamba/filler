/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:42:10 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 09:42:16 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	counter;

	str = (char *)s;
	counter = 0;
	while (counter < n)
	{
		if ((char)c == str[0])
			return ((void*)str);
		str++;
		counter++;
	}
	return (NULL);
}
