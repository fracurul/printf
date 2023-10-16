/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:13:44 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/16 17:46:35 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void   ft_format(va_list va, char *s, size_t *bytecnt)
{
    if(s == 'c')
        ft_putchar(va_arg(va, int), bytecnt);
    else if (s == 's')
        ft_putstr(va_arg(va, char *), bytecnt);
    else if(s == 'p')
		ft_printpnt(va_arg(va, void *), bytecnt);
    else if(s == 'i' || s == 'd')
        ft_printnb(va_arg(va, int), bytecnt);
    else if (s == 'u')
        ft_printbase(va_arg(va, unsigned int),"0123456789", bytecnt);
    else if(s == 'x' || s == 'X')
    {
        if (s == 'x')
            ft_printbase(va_arg(va, unsigned int), "0123456789abcdef", bytecnt);
        else
			ft_printbase(va_arg(va, unsigned int), "0123456789ABCDEF", bytecnt);
	}   
}

int	ft_printf(char *s, ...)
{
	size_t	i;
    size_t  bytecnt;
	va_list	formats;

	va_start(formats, s);
	i =  -1;
    bytecnt = 0;
	while (s[++i])
    {
		if (s[i] == '%')
        {
            i++;
            ft_format(formats, s[i], bytecnt);
        }
		else
			ft_printchar(s[i], bytecnt);
		i++;	
			

    }    
	va_end(formats);
	return (bytecnt);
}

