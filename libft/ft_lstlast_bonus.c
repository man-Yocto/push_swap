/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhaso <aalkhaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:19:32 by aalkhaso          #+#    #+#             */
/*   Updated: 2025/08/11 14:09:09 by aalkhaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;
	int		i;

	if (!lst)
		return (NULL);
	i = 1;
	ptr = lst;
	while (i != 0)
	{
		if (ptr->next != NULL)
			ptr = ptr->next;
		else
			i = 0;
	}
	return (ptr);
}
