/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:48:53 by wiljimen          #+#    #+#             */
/*   Updated: 2023/09/22 16:49:02 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str = (const unsigned char *)s;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
