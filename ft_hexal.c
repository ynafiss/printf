/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:16:06 by ynafiss           #+#    #+#             */
/*   Updated: 2022/11/06 15:48:56 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexal(size_t n, char c)
{
	int		count;
	int		i;
	char	*base;

	count = 0;
	if (c == 'p' || c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	if (n > 15)
	{
		count += ft_hexal(n / 16, c);
		i = n % 16;
		count += ft_putchar(base[i]);
	}
	else
		count += ft_putchar(base[n % 16]);
	return (count);
}
