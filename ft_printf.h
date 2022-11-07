/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:58:06 by ynafiss           #+#    #+#             */
/*   Updated: 2022/11/07 12:19:41 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    FT_PRINTF_H
# define    FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int				ft_putchar(char c);
int				ft_putnbr(int n);
int				ft_putstr(char *s);
int				ft_printf(const char *s, ...);
int				ft_hexal(size_t n, char c);
unsigned int	ft_putnbr_u(unsigned int n);

#endif