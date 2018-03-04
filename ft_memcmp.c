/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:01:34 by jadawson          #+#    #+#             */
/*   Updated: 2018/02/21 14:09:38 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *one;
	unsigned char *two;

	one = s1;
	two = s2;
	i = 0;
	while (i < n)
	{
		if ((one)[i] != (two)[i])
			return ((one)[i] - (two)[i]);
		i++;
	}
	return (0);
}
