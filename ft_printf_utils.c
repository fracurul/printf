/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:34:07 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/09 19:45:34 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putchar(char c, size_t *counter)
{
    write(1, &c, 1);
    counter++;
}


void    ft_putstr(char *str, size_t counter)
{
    size_t  i;
    
    i = -1;
    while(str[++i])
    {
        write(1, &str[i], 1);
        counter++;
    }
}

size_t  ft_percent(void)
{
    write(1, "%", 1);
    return(1);
}
