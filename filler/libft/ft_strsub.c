/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:13:28 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 10:13:37 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*str_new;
	unsigned int	i;

	str = (char*)s;
	i = 0;
	if (!(str_new = ft_strnew(len)) || !s)
		return (NULL);
	while (i < len)
	{
		str_new[i] = str[start];
		start++;
		i++;
	}
	return (str_new);
}
