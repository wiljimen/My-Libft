/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:23:10 by wiljimen          #+#    #+#             */
/*   Updated: 2023/09/22 16:16:03 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc_memory;

	alloc_memory = (char *)malloc(size * count);
	if (alloc_memory == NULL)
		return (alloc_memory);
	ft_bzero(alloc_memory, size * count);
	return (alloc_memory);
}
