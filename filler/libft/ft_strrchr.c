/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:11:10 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 10:11:17 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;
	int		counter;

	str = (char*)s;
	counter = 0;
	len = ft_strlen(str);
	while (counter < (int)len)
	{
		counter++;
		str++;
	}
	while (counter >= 0)
	{
		if (str[0] == (char)c)
			return (str);
		str--;
		counter--;
	}
	return (NULL);
}
