/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhaso <aalkhaso@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 09:39:52 by aalkhaso          #+#    #+#             */
/*   Updated: 2025/08/12 16:08:51 by aalkhaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*p;
	const char	*s;

	if ((!dest && !src) || n == 0)
		return (dest);
	p = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char src[] = "\0\0\0\0\0\0\0";
// 	char dest[] = "oooooooooo";

// 	ft_memcpy(dest, src, 4);
// 	printf("%s\n\n\n", dest);
// 	char src_1[] = "\0\0\0\0\0\0";
// 	char dest_1[] = "00000000000";
// 	memcpy(dest_1, src_1, 4);
// 	printf("%s\n", dest_1);
// }
