/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:56:55 by jadawson          #+#    #+#             */
/*   Updated: 2018/02/26 16:56:54 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *collect;
	unsigned char let;
	char *final;
	size_t i;

	i = 0;
	let = c;
	final = (char *)dst;
	collect = (char *)src;
	while (i++ < n)
	{
		if (*collect == let)
			return (collect);
		*final++ = *collect++;
	}
	return (NULL);
}
