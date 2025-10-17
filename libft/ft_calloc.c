/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yocto <yocto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:06:21 by aalkhaso          #+#    #+#             */
/*   Updated: 2025/10/17 18:06:26 by yocto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;

	if (nmemb == 0 || size == 0)
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		return ((void *)p);
	}
	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	p = malloc(nmemb * size);
	i = 0;
	if (!p)
		return (NULL);
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
// int main(){
// 	size_t nmemb = 999999999;
// 	size_t size = sizeof(int);
// 	size_t i = 0;
// 	int *p = ft_calloc(nmemb, size);
// 	if(!nmemb )
// 		return (0);
// 	while (i < nmemb)
// 	{
// 		printf("%d",p[i]) ;
// 		i++;
// 	}
// }
// int	main(void)
// {
// 	size_t	i;
// 	size_t	l;
// 	size_t	o;
// 	int		*p;

// 	i = 0;
// 	l = 0;
// 	o = sizeof(int);
// 	p = ft_calloc(0, o);
// 	//int *ptr = calloc(0,0);
// 	/* 	while(i < 15)
// 	{
// 		printf("%d ",p[i]);
// 		i++;
// 	} */
// 	free(p);
// 	return (0);
// }
