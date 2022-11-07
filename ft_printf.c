/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:51:12 by ynafiss           #+#    #+#             */
/*   Updated: 2022/11/07 11:53:28 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(int c)
{
	if (c == 'c' || c == 's' || c == 'p')
		return (1);
	if (c == 'd' || c == 'i' || c == 'u')
		return (1);
	if (c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_ft(const char *s, int i, va_list ap, int count)
{
	i++;
	if (ft_check(s[i]))
	{
		if (s[i] == 'c')
			count += ft_putchar(va_arg(ap, int));
		if (s[i] == 's')
			count += ft_putstr(va_arg(ap, char *));
		if (s[i] == 'p')
			count += ft_putstr("0x") + ft_hexal(va_arg(ap, size_t), s[i]);
		if (s[i] == 'i' || s[i] == 'd')
			count += ft_putnbr(va_arg(ap, int));
		if (s[i] == 'x' || s[i] == 'X')
				count += ft_hexal(va_arg(ap, unsigned int), s[i]);
		if (s[i] == 'u')
			count += ft_putnbr_u(va_arg(ap, unsigned int));
		if (s[i] == '%')
			count += ft_putchar('%');
	}
	else
		count += ft_putchar(s[i]);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			count = ft_ft(s, i, ap, count);
			i++;
		}
		else if (s[i] != '%')
			count += ft_putchar(s[i]);
		i++;
	}
	return (count);
}
