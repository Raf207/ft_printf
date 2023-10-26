/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:45:28 by rafnasci          #+#    #+#             */
/*   Updated: 2023/10/26 18:29:12 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putstr(char *str);
int		ft_putchar(int c);
int		ft_putnbr(int nb);
int		ft_putunsigned(unsigned int nb);
int		ft_puthex(int nb, int case_t);
char	*ft_uitoa(unsigned int n);
char	*ft_hexitoa(int n, int case_t);

#endif