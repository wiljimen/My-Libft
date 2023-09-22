/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:55:02 by wiljimen          #+#    #+#             */
/*   Updated: 2023/09/22 19:53:06 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(s1);
	copy = malloc(sizeof(srclen));
	if (copy == 0)
		return (NULL);
	while (s1[i] != '\0')
	{
		copy[i] = (*(char *)&s1[i]);
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
