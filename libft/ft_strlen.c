/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocto <yocto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:27:36 by aalkhaso          #+#    #+#             */
/*   Updated: 2025/10/16 15:57:12 by yocto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t		i;

	if(!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// int main()
// {
// 	char *str = NULL;
// 	printf("%zu\n", ft_strlen(str));
// 	return (0);
// }
