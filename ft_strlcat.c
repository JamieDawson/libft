/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:23:06 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/04 00:03:14 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t num)
{
	int	i;
	int	j;
	int	k;
	int	total;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	k = 0;
	while (src[j] != '\0' && num > k)
	{
		dest[i + j] = src[j];
		j++;
		k++;
	}
	dest[i + j] = '\0';
	total = i + j;
	return (total);
}
