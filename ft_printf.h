/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:25:51 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/11 17:40:38 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF__F

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# define HEX_UPPER_BASE "0123456789ABCDF"
# define HEX_LOWER_BASE "0123456789abcdf"

int ft_printf(char *s, ...);
#endif