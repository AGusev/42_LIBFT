/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 20:52:08 by agusev            #+#    #+#             */
/*   Updated: 2019/02/12 21:02:06 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	unsigned char count;

	count = 0;
	while (*(s2 + count))
	{
		*(s1 + count) = *(s2 + count);
		count++;
	}
	*(s1 + count) = '\0';
	return (s1);
}
