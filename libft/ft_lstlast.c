/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                          :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: narhbal <narhbal@student.42.fr>              +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:47:05 by narhbal            #+#    #+#            */
/*   Updated: 2022/07/05 15:20:54 by narhbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (!(lst->next == NULL))
		lst = lst->next;
	return (lst);
}
