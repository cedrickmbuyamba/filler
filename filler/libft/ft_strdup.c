/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:58:20 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 09:58:23 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char			*s;
	unsigned int	i;

	s = (char*)malloc(sizeof(*s) * ft_strlen(s1) + 1);
	i = 0;
	if (!s)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
