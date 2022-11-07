/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynafiss <ynafiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:39:00 by ynafiss           #+#    #+#             */
/*   Updated: 2022/11/06 15:51:33 by ynafiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr_u(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = n * -1;
	}
	if (n < 10 && n >= 0)
	{
		count += ft_putchar(n + '0');
	}
	else
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	return (count);
}
