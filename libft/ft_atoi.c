/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narhbal <narhbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:47:05 by narhbal           #+#    #+#             */
/*   Updated: 2022/07/07 16:26:29 by narhbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c && (c == '\f' || c == '\t' || c == ' '
			|| c == '\n' || c == '\r' || c == '\v'));
}

static int	ft_extreme(int number, unsigned long long extreme, int sign)
{
	unsigned long long	min;
	unsigned long long	max;

	min = 9223372036854775808U;
	max = 9223372036854775807U;
	if (extreme > max && sign == 1)
		return (-1);
	if (extreme > min && sign == -1)
		return (0);
	return (number * sign);
}

static int	ft_plus_or_minus(char *str, int i, int *sign)
{
	if (str[i] == '-')
	{
		*sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	int					number;
	unsigned long long	extreme;
	char				*res;

	i = 0;
	sign = 1;
	number = 0;
	extreme = 0;
	res = (char *)(str);
	while (ft_isspace(res[i]))
		i++;
	i = ft_plus_or_minus(res, i, &sign);
	while (res[i] >= '0' && res[i] <= '9')
	{
		number = number * 10 + res[i] - '0';
		extreme = extreme * 10 + res[i] - '0';
		i++;
	}
	return (ft_extreme(number, extreme, sign));
}
