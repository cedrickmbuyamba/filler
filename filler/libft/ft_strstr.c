/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmbuyamb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:12:16 by cmbuyamb          #+#    #+#             */
/*   Updated: 2018/08/07 10:12:21 by cmbuyamb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;

	i = 0;
	j = 0;
	size = ft_strlen(little);
	if (size == 0)
		return (char*)(big);
	while (big[i])
	{
		while (big[i + j] == little[j])
		{
			if (j == size - 1)
				return (char*)(big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
