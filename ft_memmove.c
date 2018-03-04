/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:02:55 by jadawson          #+#    #+#             */
/*   Updated: 2018/02/21 14:44:49 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char *temp;
	unsigned char *new;

	i = 0;
	temp = src;
	new = dest;
	while (i < n)
	{
		((new)[i] = temp[i]);
		i++;
	}
	return (dest);
}
