/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:23:12 by rafnasci          #+#    #+#             */
/*   Updated: 2023/10/26 17:44:50 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	ft_unsignedlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	int		len;
	char	*rep;

	len = ft_unsignedlen(n);
	rep = (char *) malloc (sizeof(char) * (len + 1));
	if (!rep)
		return (NULL);
	len = 0;
	while (n > 0)
	{
		rep[len] = n % 10 + '0';
		n = n / 10;
		len++;
	}
	rep[len] = '\0';
	return (rep);
}

static int	ft_hexalen(int nb)
{
	int	len;

	len = 0;
	while (nb > 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

char	*ft_hexitoa(int n)
{
	int		len;
	char	*rep;
	char	*hexa;

	len = ft_hexalen(n);
	hexa = "0123456789abcdef";
	rep = (char *) malloc (sizeof(char) * (len + 1));
	if (!rep)
		return (NULL);
	len = 0;
	while (n > 0)
	{
		rep[len] = hexa[n % 16];
		n = n / 16;
		len++;
	}
	rep[len] = '\0';
	return (rep);
}

void	ft_strtoupper(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_toupper(str[i]);
}
