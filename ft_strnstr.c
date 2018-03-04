/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:40:57 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/04 00:51:49 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = -1;
	j = -1;
	if (*to_find == '\0')
		return((char*)str);
	while (str[++i] && len)
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return ((char*)str + i);
			++j;
		}
		len--;
	}	
	return (NULL);
}
