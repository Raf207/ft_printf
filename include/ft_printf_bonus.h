/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafnasci <rafnasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:23:55 by rafnasci          #+#    #+#             */
/*   Updated: 2024/02/01 12:24:45 by rafnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include "../libft/include/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putstr(char *str);
int		ft_putchar(int c);
int		ft_putnbr(int nb);
int		ft_putunsigned(unsigned int nb);
int		ft_puthex(unsigned int nb, int case_t);
char	*ft_uitoa(unsigned int n);
char	*ft_hexitoa(unsigned int n, char *base);
int		ft_putpoint(unsigned long int n);
char	*ft_invert(char *str);

#endif