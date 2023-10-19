/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:09:32 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/19 17:16:54 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t  ft_strlen(char *s)
{
    size_t i;

    i = 0;
    while(s[i])
        i++;
    return(i);
}

void    ft_printbase(unsigned long long nb, char *base, size_t *bytecnt)
{
    if (nb >= ft_strlen(base))
    {
        ft_printbase(nb / ft_strlen(base), base);
        ft_printbase(nb % ft_strlen(base), base);
    }
    else
        ft_printchar(nb +'0', bytecnt);
}

void    ft_printpnt(unsigned long long pnt, size_t *bytecnt)
{
    ft_printstr("0x", *bytecnt);
    if (pnt >= 9223372036854775807)
        ft_printbase(pnt, "0123456789abcdef", bytecnt);
    else
        ft_printbase(pnt, "0123456789abcdef", bytecnt);
}