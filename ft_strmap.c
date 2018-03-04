/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:36:47 by jadawson          #+#    #+#             */
/*   Updated: 2018/02/23 21:56:11 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned i;
	char    *string;
	char    *ptr;
    
	string = (char*)s;
	i = ft_strlen((char*)s);
	ptr = (char*)malloc(sizeof(char) * i);
	i = 0;
 	if (ptr == NULL)
		return (NULL);
	while(string[i])
	{
		ptr[i] = f(string[i]);
		i++;
	}
	return (ptr);
}
