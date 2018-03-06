/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:26:36 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/06 00:21:00 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *str, const char *to_find)
{
	size_t i;
	size_t j;

	i = -1;
	j = ft_strlen(to_find);
	if (!j)
		return ((char *)str);
	while (str[++i])
	{
		if (ft_strncmp(&str[i], to_find, j) == 0)
			return ((char *)&str[i]);
	}
	return (NULL);
}
