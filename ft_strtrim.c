/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 15:17:02 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/04 00:20:59 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strtrim(char const *s)
{
	int i;
	int j;
	int tot;
	char *str;
	char *ptr;

	i = 0;
	j = 0;
	str = (char*)s;
	while(str[i])
		i++;
	while(str[j] == ' ' || str[j] == '\n' || str[j] == '\t')
		j++;
	while(str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
		i--;
	tot = i - j;
	ptr = (char*)malloc(sizeof(char) * tot + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strncpy(ptr, &s[j], tot);
	return(ptr);
}
