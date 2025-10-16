/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhaso <aalkhaso@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 08:00:06 by aalkhaso          #+#    #+#             */
/*   Updated: 2025/08/12 15:55:42 by aalkhaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;
	unsigned char	a;

	p = (unsigned char *)s;
	a = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == a)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
// int main (){
// 	char *s = "     t        ";
// 	int *c;
// 	c = ft_memchr(s, 't',3);
// 	printf("%s", c);
// }
