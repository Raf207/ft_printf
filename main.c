/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:49:37 by rafnasci          #+#    #+#             */
/*   Updated: 2023/10/26 17:47:52 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"
#include "libft/libft.h"

int	main(void)
{
	double	test;

	test = 42.19;
	printf("double %f, int : %d, egal : %f", test, (int) test, (test - (int) test));
	return (0);
}
