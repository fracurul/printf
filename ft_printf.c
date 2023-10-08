/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fracurul <fracurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:13:44 by fracurul          #+#    #+#             */
/*   Updated: 2023/10/08 19:13:47 by fracurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *s, ...)
{
	size_t	i;
	va_list	pro;

	va_start(pro, s);
	i = va_arg(pro, &s[i]);
	/*i =  -1;
	while (s[++i])
		write(1, &s[i], 1);
	*/
	va_end(pro);
	return (i);
}
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_printf("", 200));
}
