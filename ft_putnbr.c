/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudiba <aboudiba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:07:07 by aboudiba          #+#    #+#             */
/*   Updated: 2023/11/13 21:01:47 by aboudiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		ft_putchar('-', len);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr((n / 10), len);
	ft_putchar((n % 10 + '0'), len);
}
