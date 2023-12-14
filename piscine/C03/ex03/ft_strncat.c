/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narhbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:49:11 by narhbal           #+#    #+#             */
/*   Updated: 2022/02/21 13:13:26 by narhbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (*(dest + i) != '\0')
		i++;
	while (c < nb && *(src + c) != '\0')
	{	
		*(dest + i + c) = *(src + c);
		c++;
	}
	*(dest + i + c) = '\0';
	return (dest);
}
