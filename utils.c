/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:23:12 by rafnasci          #+#    #+#             */
/*   Updated: 2023/10/26 18:17:57 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static char	*ft_invert(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = ft_strlen(str);
	if (str[i] == '-')
		i++;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tmp;
		i++;
		len--;
	}
	return (str);
}

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
	return (ft_invert(rep));
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

char	*ft_hexitoa(int n, int case_t)
{
	int		len;
	char	*rep;
	char	*hexa;

	len = ft_hexalen(n);
	if (case_t == 0)
		hexa = "0123456789abcdef";
	else
		hexa = "0123456789ABCDEF";
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
	return (ft_invert(rep));
}
