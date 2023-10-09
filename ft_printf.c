/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:13:44 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/09 21:16:49 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void   ft_format(va_list va, char *s, size_t *counter)
{
    if(s == 'c')
        ft_putchar(va_arg(va, int), counter);
    else if (s == 's')
        ft_putstr(va_arg(va, char *), counter);
    else if(s == 'p')
        
        
}

int	ft_printf(char *s, ...)
{
	size_t	i;
    size_t  counter;
	va_list	formats;

	va_start(formats, s);
	i =  -1;
    counter = 0;
	while (s[++i])
    {
		if (s[i] == '%')
        {
            i++;
            ft_format(formats, s[i], counter);
        }

    }    
	va_end(formats);
	return (i);
}

#include <stdio.h>

int main()
{
    printf()
}