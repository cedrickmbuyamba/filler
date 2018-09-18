/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:09:13 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 10:09:29 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return (char*)(big);
	while (big[i] && i < len)
	{
		while (big[i] != little[j] && big[i])
			i++;
		str = (char*)(big + i);
		while (big[i] == little[j] && big[i] && little[j] && i < len)
		{
			i++;
			j++;
		}
		if (!little[j])
			return (char*)(str);
		else
			j = 0;
	}
	return (NULL);
}
