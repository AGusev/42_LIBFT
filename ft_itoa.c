/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 19:07:36 by agusev            #+#    #+#             */
/*   Updated: 2019/02/18 17:45:07 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	j = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (str == 0)
		return (0);
	str[j] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i += 1;
	}
	while (i < j--)
	{
		str[j] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
