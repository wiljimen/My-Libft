/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <wiljimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:07:58 by wiljimen          #+#    #+#             */
/*   Updated: 2023/09/22 20:34:16 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	i;
	size_t	j;

	j = (size_t)start;
	i = 0;
	sub = malloc(sizeof(char) * (len + 1));
	slen = ft_strlen(s);
	if (sub == NULL || (size_t)start > slen)
		return (NULL);
	while (sub[i] != '\0' || (s[j] != '\0') || i < len + 1)
	{
		sub[i] = s[j];
		i++;
		j++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	const char *s = "Hola";
	unsigned int start = 1;

	printf("%s", ft_substr(s, start, 80));
}*/
