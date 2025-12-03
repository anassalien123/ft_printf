/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancheab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 02:20:21 by ancheab           #+#    #+#             */
/*   Updated: 2025/11/20 02:20:31 by ancheab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	print_nb(long nb)
{
	if (nb / 10)
		return (print_nb(nb / 10) + print_nb(nb % 10));
	else
		return (ft_putchar(nb + '0'));
}

size_t	ft_putnbr(const int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		return (ft_putchar('-') + print_nb(nb));
	}
	else
		return (print_nb(nb));
}
