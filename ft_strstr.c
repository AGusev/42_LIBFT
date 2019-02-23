/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 21:59:42 by agusev            #+#    #+#             */
/*   Updated: 2019/02/18 17:23:04 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	const char *s;
	const char *p;

	if (*s1 == *s2 && *s1 == '\0')
		return ((char *)s1);
	while (*s1)
	{
		s = s1;
		p = s2;
		while (*p && *s1 && *p == *s1)
		{
			p++;
			s1++;
		}
		if (!*p)
			return ((char *)s);
		s1 = s + 1;
	}
	return (NULL);
}
