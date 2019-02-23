/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 11:41:25 by agusev            #+#    #+#             */
/*   Updated: 2019/02/18 17:14:19 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	len = 0;
	while (s1[len] && len < size)
		len += 1;
	i = len;
	while (s2[len - i] && len + 1 < size)
	{
		s1[len] = s2[len - i];
		len++;
	}
	if (i < size)
		s1[len] = '\0';
	return (i + ft_strlen(s2));
}
