/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:03:34 by wiljimen          #+#    #+#             */
/*   Updated: 2023/09/15 20:46:23 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	srclen;

	i = 0;
	j = 0;
	srclen = ft_strlen(src);
	while (i < srclen && i < len)
	{
		*((unsigned char *) dst + i) = *((unsigned const char *) src + i);
		i++;
	}
	return (dst);
}

int	main(void)
{
	char	*dst = "hola";
	const char	*src = "aloh";

	printf("%s",ft_memmove(dst, src, 2));
}
