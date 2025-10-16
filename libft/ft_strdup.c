/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhaso <aalkhaso@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:12:22 by yocto             #+#    #+#             */
/*   Updated: 2025/08/13 12:54:41 by aalkhaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*q;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	q = malloc((i + 1) * sizeof(char));
	if (!q)
		return (NULL);
	while (j < i)
	{
		q[j] = s[j];
		j++;
	}
	q [i] = '\0';
	return (q);
}

// int main()
// {
// 	printf("%s\n", strdup(NULL));
// 	return (0);
// }
