/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 21:04:33 by agusev            #+#    #+#             */
/*   Updated: 2019/02/13 21:49:24 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *des, const char *src, size_t n)
{
	char		*tmp;
	size_t		count;

	tmp = des;
	count = 0;
	while (*(src + count) && (count < n))
	{
		*(tmp + count) = *(src + count);
		count++;
	}
	while (count < n)
	{
		*(tmp + count) = '\0';
		count++;
	}
	return (des);
}
