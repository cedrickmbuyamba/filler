/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:45:40 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 09:45:43 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	str = (char*)b;
	i = 0;
	while (i < len)
	{
		str[i] = (char)c;
		i++;
	}
	return (b);
}
