/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:13:44 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/11 17:19:41 by fracurul         ###   ########.fr       */
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
    else if((s == 'd')
    else if(s == 'i')
        ft_printnbr(va_arg(va, int), bytecnt);
    
        
        
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

    }    
	va_end(formats);
	return (i);
}

