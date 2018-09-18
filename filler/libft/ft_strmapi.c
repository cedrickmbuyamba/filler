/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:05:20 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 10:05:27 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*str_new;

	i = 0;
	str = (char*)s;
	if (str && f)
	{
		if (!(str_new = ft_memalloc(ft_strlen(str) + 1)))
			return (NULL);
		while (str[i])
		{
			str_new[i] = (*f)(i, str[i]);
			i++;
		}
		str_new[i] = '\0';
		return (str_new);
	}
	return (NULL);
}
