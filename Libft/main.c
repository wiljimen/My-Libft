/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:06:09 by wiljimen          #+#    #+#             */
/*   Updated: 2023/09/25 17:14:35 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main(void)
{
	const char	*s;
	const char	*s2;

	s = "Hola";
	s2 = ", Adios";
	const char *result = ft_strjoin(s, s2);
	printf("%s", result);
}
