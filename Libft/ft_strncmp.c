/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <wiljimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:58:22 by wiljimen          #+#    #+#             */
/*   Updated: 2023/09/20 20:58:22 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s2[i] != '\0' && s1[i] != '\0' && i < n)
	{
		if (s2[i] != s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (n == 0 || i == n)
		return (0);
	return (s1[i] - s2[i]);
}
