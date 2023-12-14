/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narhbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:26:12 by narhbal           #+#    #+#             */
/*   Updated: 2022/02/09 17:29:11 by narhbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write (1, &c, 1);
}

void	print(int n, int tab[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		put_char(tab[i] + '0');
		i++;
	}
	if (tab[0] != 10 - n)
		write (1, ", ", 2);
}

void	loop(int nb, int n, int tab[])
{
	while (tab[0] <= 10 - nb)
	{
		while (tab[nb - n] <= 10 - n)
		{
			print(nb, tab);
			tab[nb - n]++;
		}
		while (tab[nb - n] - 1 == 10 - n)
			n++;
		tab[nb - n]++;
		while (n != 1 && nb != 1)
		{
			tab[nb - n + 1] = tab[nb - n] + 1;
			n--;
		}
	}
}

void	ft_print_combn(int nb)
{
	int	tab[9];
	int	i;
	int	n;

	if (nb > 0 && nb < 10)
	{
		i = 0;
		n = 1;
		while (i < nb)
		{
			tab[i] = i;
			i++;
		}
		loop(nb, n, tab);
	}
}
