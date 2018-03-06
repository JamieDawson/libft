/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:40:57 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/06 00:28:44 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = -1;
	j = ft_strlen(s2);
	if (!j)
		return ((char *)s1);
	while (s1[++i] && i + j <= n)
	{
		if (ft_strncmp(&s1[i], s2, j) == 0)
			return ((char *)&s1[i]);
	}
	return (NULL);
}
