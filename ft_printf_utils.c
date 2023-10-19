/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:34:07 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/19 17:27:08 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_printchar(char c, size_t *bytecnt)
{
    write(1, &c, 1);
    bytecnt++;
}


void    ft_printstr(char *str, size_t *bytecnt)
{
    size_t  i;
    
    i = -1;
    while(str[++i])
    {
        write(1, &str[i], 1);
        bytecnt++;
    }
}

void ft_printnb(int long nb, size_t *bytecnt)
{
    if(nb < 0)
    {
        ft_printchar('-', bytecnt);
        nb *= -1;
        
    }
    if(nb > 9)
    {
        ft_printnb(nb / 10);
        ft_printnb(nb % 10);
    }
    else
        ft_printchar(nb + '0', bytecnt);
}

size_t  ft_percent(void)
{
    write(1, "%", 1);
    return(1);
}
