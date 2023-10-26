/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:47:27 by rafnasci          #+#    #+#             */
/*   Updated: 2023/10/26 17:47:27 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_conversion(int c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		count += ft_putstr(va_arg(ap, char *));
	// else if (c == 'p')
	// 	count += ft_putpoint(va_arg(ap, unsigned long int));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		count += ft_putunsigned(va_arg(ap, unsigned int));
	else if (c == 'x')
		count += ft_puthex(va_arg(ap, int), 0);
	else if (c == 'X')
		count += ft_puthex(va_arg(ap, int), 1);
	else
		count += write(1, &c, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		counter;

	counter = 0;
	va_start(arguments, format);
	while (*format)
	{
		if (*format == '%')
			counter += ft_conversion(*(++format), arguments);
		else
			counter += write(1, format, 1);
		format++;
	}
	va_end(arguments);
	return (counter);
}
