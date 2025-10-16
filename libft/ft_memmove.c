/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhaso <aalkhaso@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:03:46 by aalkhaso          #+#    #+#             */
/*   Updated: 2025/08/13 13:40:56 by aalkhaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p;
	const unsigned char	*s;

	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (p == s || n == 0)
		return (dest);
	if (p > s && p < s + n)
	{
		i = n;
		while (i-- > 0)
			p[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			p[i] = s[i];
			i++;
		}
	}
	return (dest);
}
// int main()
// {
//     int i = 0;
//     char p[] = "ABCDEFG";
//     ft_memmove(&p[2], &p[0], 4);

//     while (i < 8)
//     {
//         printf("%c", p[i]);
//         i++;
//     }
//     printf("\n");
//     return (0);
// }
