/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhaso <aalkhaso@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:20:41 by yocto             #+#    #+#             */
/*   Updated: 2025/08/13 13:13:56 by aalkhaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	fill_str(char *str, long n, int len)
{
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	while (n)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	int		length;

	num = n;
	length = len(num);
	res = malloc(length + 1);
	if (!res)
		return (NULL);
	if (num < 0)
	{
		num = -num;
		res[0] = '-';
	}
	fill_str(res, num, length);
	return (res);
}

// int main()
// {
// 	int c =- 4;
// 	printf("%s\n", ft_itoa(c));
// }
