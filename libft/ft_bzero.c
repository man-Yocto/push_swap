/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhaso <aalkhaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 09:26:48 by aalkhaso          #+#    #+#             */
/*   Updated: 2025/08/13 13:54:18 by aalkhaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;

	tmp_ptr = (char *)s;
	while (n > 0)
	{
		*(tmp_ptr++) = 0;
		n--;
	}
}
// int main(void)
// {
//     char s[] = "";
//     ft_bzero(s, 2);

//     printf("%s\n", s + 3);

//     printf("\n");
// }