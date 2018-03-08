/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:38:01 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/07 20:41:35 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*change;
	char			*ptr;

	i = ft_strlen((char*)s);
	change = (char*)s;
	ptr = (char*)malloc(sizeof(char*) * i);
	i = 0;
	while (s[i])
	{
		ptr[i] = (f)(i, *change);
		i++;
	}
	return (ptr);
}
