/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:03:34 by wiljimen          #+#    #+#             */
/*   Updated: 2023/09/18 15:41:59 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (src >= dst)
		ft_memcpy(dst, src, len);
	else
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*((unsigned char *) dst + i) = *((unsigned const char *) src + i);
			i--;
		}
	}
	return (dst);
}
