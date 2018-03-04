/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:25:26 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/04 00:51:10 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *change;
	char *str;

	change = (char*)c;
	str = (char*)s;
	while (*str != change && *str)
		str++;
	if (*str == change)
		return (str);
	return (NULL);
}
