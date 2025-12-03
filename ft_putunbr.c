/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancheab <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 02:25:02 by ancheab           #+#    #+#             */
/*   Updated: 2025/11/20 02:25:06 by ancheab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putunbr(const unsigned int n)
{
	if (n / 10)
		return (ft_putunbr(n / 10) + ft_putunbr(n % 10));
	else
		return (ft_putchar(n + '0'));
}
