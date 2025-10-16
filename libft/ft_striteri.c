/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhaso <aalkhaso@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 08:10:52 by yocto             #+#    #+#             */
/*   Updated: 2025/08/13 13:01:14 by aalkhaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void toto(unsigned int i, char *s)
// {
// 	// s[i] = 'a';
// 	*s = 'a';
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (i < ft_strlen(s))
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// int main()
// {
// 	char s[] = "11111111";
// 	printf("before : %s\n", s);
// 	ft_striteri(s, toto);
// 	printf("after : %s\n", s);
// 	return (0);
// }
