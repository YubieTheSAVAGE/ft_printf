/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudiba <aboudiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:49:01 by aboudiba          #+#    #+#             */
/*   Updated: 2023/11/13 20:56:45 by aboudiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(int nbr, char *format, int *len)
{
	unsigned int	n;

	n = (unsigned int)nbr;
	if (n >= 16)
		ft_puthex(n / 16, format, len);
	ft_putchar(format[n % 16], len);
}
