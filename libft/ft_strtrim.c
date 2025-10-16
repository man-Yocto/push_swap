/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalkhaso <aalkhaso@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 08:12:55 by yocto             #+#    #+#             */
/*   Updated: 2025/08/13 13:05:37 by aalkhaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isexist(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	find_begin(const char *s1, const char *set)
{
	size_t	begin;

	begin = 0;
	while (s1[begin] && isexist(s1[begin], set))
		begin++;
	return (begin);
}

static size_t	find_end(const char *s1, const char *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > 0 && isexist(s1[end - 1], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	size_t	len;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	begin = find_begin(s1, set);
	end = find_end(s1, set);
	if (end < begin)
		len = 0;
	else
		len = end - begin;
	trimmed = (char *)malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + begin, len);
	trimmed[len] = '\0';
	return (trimmed);
}
// int main()
// {
// 	char *str = ft_strtrim("123 salam 123", "123");
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
