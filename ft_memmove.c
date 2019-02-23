/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 18:24:24 by agusev            #+#    #+#             */
/*   Updated: 2019/02/18 17:18:56 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	const char	*a;
	const char	*a1;
	char		*b;
	char		*b1;

	b = s1;
	a = s2;
	if (b < a)
	{
		while (n--)
			*b++ = *a++;
	}
	else
	{
		a1 = a + (n - 1);
		b1 = b + (n - 1);
		while (n--)
			*b1-- = *a1--;
	}
	return (s1);
}
