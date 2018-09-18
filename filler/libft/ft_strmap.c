/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:04:45 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 10:05:00 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	char			*str_new;
	unsigned int	i;

	str = (char*)s;
	if (str && f)
	{
		if (!(str_new = ft_memalloc(ft_strlen(str) + 1)))
			return (NULL);
		i = 0;
		while (str[i])
		{
			str_new[i] = (*f)(str[i]);
			i++;
		}
		str_new[i] = '\0';
		return (str_new);
	}
	return (NULL);
}
