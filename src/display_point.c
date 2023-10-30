/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_point.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:36:07 by rafnasci          #+#    #+#             */
/*   Updated: 2023/10/30 16:17:41 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/include/libft.h"

static int	ft_longhexalen(unsigned long int nb)
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

static char	*ft_longhexaitoa(unsigned long int n)
{
	int		len;
	char	*rep;
	char	*hexa;

	len = ft_longhexalen(n);
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
	return (ft_invert(rep));
}

int	ft_putpoint(unsigned long int n)
{
	int		count;
	char	*str;
	int		secure;

	count = write(1, "0x", 2);
	if (count == -1)
		return (-1);
	str = ft_longhexaitoa(n);
	secure = ft_putstr(str);
	free(str);
	if (secure == -1)
		return (-1);
	count += secure;
	return (count);
}
