/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:25:51 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/16 17:48:58 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF__F

# include <stdarg.h>
# include <unistd.h>

int     ft_printf(char *s, ...);
void    ft_printchar(char c, size_t *bytecnt);
void    ft_printstr(char *str, size_t *bytecnt);
void ft_printnb(int long nb, size_t *bytecnt);
void    ft_printbase(unsigned long long nb, char *base, size_t *bytecnt);
void    ft_printpnt(unsigned long long pnt, size_t *bytecnt);
size_t  ft_percent(void);
size_t  ft_strlen(char *s);



#endif