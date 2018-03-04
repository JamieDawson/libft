/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 21:41:31 by jadawson          #+#    #+#             */
/*   Updated: 2018/02/28 22:01:26 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     numlen(int i)
{
    int length;

    length = 1;
    if (i >= 1 && i <= 9)
        return(1);

    while (i >= 10)
    {
      i =  (i / 10);
      length++;
    }
    if (i == 0)
        return(0);
    return(length);
}

char	*ft_itoa(int i)
{
	char *ptr;
	int len;
	int isneg;

    isneg = 0;
	len = numlen(i);
	if (i < 0)
     isneg = 1;
	ptr = ft_strnew(len + isneg);
	if (ptr == NULL)
		return (NULL);
	ptr[len] = '\0';
	len--;
	while (len + 1 != 0)
	{
	    ptr[len] = (i % 10) + 48;
	    i = i / 10;
	    len--;
	}
	if(isneg)
	    ptr[0] = '-';
	return (ptr);
}
