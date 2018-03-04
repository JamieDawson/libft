/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:14:52 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/04 00:27:39 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;
	char *gather;
	char *final;

	i = 0;
	gather = src;
	final = dest;
	while(i < n)
	{
		*dest = *gather;
		i++;
		dest++;
		gather++;
	}
	*dest = '\0';
	return (final);
}
