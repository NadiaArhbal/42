/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narhbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:54:05 by narhbal           #+#    #+#             */
/*   Updated: 2022/02/03 09:59:25 by narhbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnbr(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	nb;

		nb = 0;
	while (nb >= 0 && nb < 10)
	{
		ft_printnbr(nb + '0');
	nb++;
	}
}
