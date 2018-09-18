/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:14:02 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 10:14:15 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (s)
	{
		i = 0;
		j = ft_strlen((char*)s) - 1;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		str = (char*)malloc(sizeof(char) * (j - i + 1));
		if (!str)
			return (NULL);
		while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
			j--;
		k = 0;
		while (i <= j)
			str[k++] = s[i++];
		str[k] = '\0';
		return (str);
	}
	return (NULL);
}
