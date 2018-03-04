/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 21:52:59 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/03 17:27:34 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
     while (*s1 && *s2 && *s1 == *s2 && n)
      {
          s1++;
          s2++;
		  n--;
      }
     return (*s1 - *s2);
}