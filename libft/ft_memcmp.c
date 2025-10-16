/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhaso <aalkhaso@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 08:19:04 by aalkhaso          #+#    #+#             */
/*   Updated: 2025/08/12 16:02:25 by aalkhaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return ((int)(p1[i] - p2[i]));
		i++;
	}
	return (0);
}
// int main(){
// 	char *s1 = "";
// 	char *s2 = "";
// 	int c = ft_memcmp(s1,s2,4);
// 	printf("%d",c);
// 	return (0);
// }
