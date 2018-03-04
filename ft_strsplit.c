/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 22:23:53 by jadawson          #+#    #+#             */
/*   Updated: 2018/03/02 22:25:24 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_count_words(char *str, char c)
{
    int i = 0;
    int words = 0;
    while (str[i] != '\0')
    {
        while (!(str[i] == c))
            if (str[i] != '\0')
                i++;
            else
                break;
        while (str[i] == c)
            i++;
        words++;
    }
    return(words);
}

char    *ft_find_words(char *str, char c, int *index)
{
    int i = *index;
    int start = *index;
    int end;
    while (!(str[i] == c))
        if (str[i] != '\0')
            i++;
        else
            break;
    end = i;
    char *dest = (char*)malloc(end - start + 1);
    while (str[i] == c)
        i++;
    *index = i;
    i = 0;
    while (i < end - start)
    {
        dest[i] = str[start + i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

char    **ft_strsplit(char *str, char c)
{
    int i = 0;
    int index = 0;
    char **dest = (char**)malloc(sizeof(char*) * (ft_count_words(str, c) + 1));
    while (str[0] == c)
        str++;
    while (str[i] != '\0')
    {
        dest[index] = ft_find_words(str, c, &i);
        index++;
    }
    dest[index] = 0;
    return(dest);
}