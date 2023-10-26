/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:05:13 by rafnasci          #+#    #+#             */
/*   Updated: 2023/10/26 17:46:54 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*str)
		count += ft_putchar(*str++);
	return (count);
}

int	ft_putnbr(int nb)
{
	char	*str;
	int		len;

	str = ft_itoa(nb);
	len = ft_putstr(str);
	free(str);
	return (len);
}

int	ft_putunsigned(unsigned int nb)
{
	char	*str;
	int		len;

	str = ft_uitoa(nb);
	len = ft_putstr(str);
	free(str);
	return (len);
}

int	ft_puthex(int nb, int case_t)
{
	char	*str;
	int		len;

	if (case_t)
	{
		str = ft_hexitoa(nb);
		ft_strtoupper(str);
		len = ft_putstr(str);
		free(str);
		return (len);
	}
	str = ft_hexitoa(nb);
	len = ft_putstr(str);
	free(str);
	return (len);
}
