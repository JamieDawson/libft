/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:43:21 by jadawson          #+#    #+#             */
/*   Updated: 2018/02/24 20:37:11 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	char let;
	unsigned i;

	str = (char*)s;
	let = (char)c;
	i = 0;
	while(s[i])
		i++;
	while(i-- != 0)
	{
		if(*str == c)
			return(str);
		str++;
	}
	return(str);
}
