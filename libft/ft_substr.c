/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narhbal <narhbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:47:05 by narhbal           #+#    #+#             */
/*   Updated: 2022/07/07 13:34:20 by narhbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	lensub(int k, int start, int len, const char *s)
{
	while (s[k + start])
		k++;
	if (len > k)
		len = k;
	return (len);
}

static	int	allocate(char **substr)
{
	*substr = (char *)malloc(sizeof(char) * 1);
	if (!*substr)
		return (0);
	*substr[0] = '\0';
	return (1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;
	unsigned int	k;

	k = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (s_len < start)
	{
		if (!allocate(&substr))
			return (NULL);
		return (substr);
	}
	len = lensub(k, start, len, s);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < len)
		substr[i] = s[start + i];
	substr[i] = '\0';
	return (substr);
}
