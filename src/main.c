/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:49:37 by rafnasci          #+#    #+#             */
/*   Updated: 2023/10/26 18:15:45 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"
#include "libft/libft.h"

int	main(void)
{
	double	test;

	test = 12456;
	ft_printf("test c : %c\n", 'B');
	ft_printf("test s : %s\n", "123456");
	ft_printf("test d : %d\n", 123.4);
	ft_printf("test i : %i\n", 123);
	ft_printf("test u : %u\n", 123456789);
	ft_printf("test x : %x\n", 123456789);
	ft_printf("------------------------------\n");
	ft_printf("test X : %X\n", 123456789);
	return (0);
}
