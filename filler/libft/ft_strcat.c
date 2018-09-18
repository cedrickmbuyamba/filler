/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:52:06 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 09:52:13 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned int		i;
	unsigned int		j;
	unsigned char		*str1;
	unsigned char		*str2;

	i = 0;
	j = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (str1[i] != '\0')
		i++;
	while (str2[j] != '\0')
	{
		str1[i + j] = str2[j];
		j++;
	}
	str1[i + j] = '\0';
	return (s1);
}
