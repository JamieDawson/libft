/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:59:21 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/04 01:52:49 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *replace;
    unsigned char *find;
    
    replace = (unsigned char*)s;
    find = (unsigned char*)c;
    while (n > 0)
    {
        if (*replace == find)
            return (replace);
        replace++;
        n--;
    }
    return (NULL);
}
