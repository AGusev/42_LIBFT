/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 21:33:18 by agusev            #+#    #+#             */
/*   Updated: 2019/02/18 17:30:12 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char *ptr1;
	const unsigned char *ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (*ptr1 && *ptr2)
	{
		if (*ptr1 == *ptr2)
		{
			ptr1++;
			ptr2++;
		}
		else
		{
			return (*ptr1 - *ptr2);
		}
	}
	return (*ptr1 - *ptr2);
}
