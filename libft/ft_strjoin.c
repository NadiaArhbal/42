/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narhbal <narhbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:59:30 by narhbal           #+#    #+#             */
/*   Updated: 2022/07/05 17:19:27 by narhbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	size_t	i;
	size_t	j;
	int		size;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	j = -1;
	size = ft_strlen(s1) + ft_strlen(s2);
	final = (char *)malloc(sizeof (char) * (size + 1));
	if (!final)
		return (NULL);
	while (s1[++i])
		final[i] = s1[i];
	while (s2[++j])
		final[i++] = s2[j];
	final[i] = 0;
	return (final);
}
