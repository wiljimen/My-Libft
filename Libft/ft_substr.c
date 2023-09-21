/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <wiljimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:07:58 by wiljimen          #+#    #+#             */
/*   Updated: 2023/09/21 14:01:06 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	i;
	size_t	j;

	j = (size_t) start;
	i = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	slen = ft_strlen(s);
	if (sub == NULL || (size_t)start >= len || len > slen)
		return (NULL);
	while (sub[i] != '\0' || i < len)
	{
		sub[i] = s[j];
		i++;
		j++;
	}
	sub[i] = '\0';
	return (sub);
}
