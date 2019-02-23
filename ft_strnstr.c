/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:33:22 by agusev            #+#    #+#             */
/*   Updated: 2019/02/13 19:01:26 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s1[i] && (i < n))
	{
		while ((s1[i + j] == s2[j]) && s2[j] && ((i + j) < n))
			j += 1;
		if (!s2[j])
			return ((char *)&s1[i]);
		j = 0;
		i += 1;
	}
	if (!s2[0])
		return ((char *)&s1[i]);
	return (0);
}
