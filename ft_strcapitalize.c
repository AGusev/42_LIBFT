/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 21:46:49 by agusev            #+#    #+#             */
/*   Updated: 2019/02/18 21:53:49 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	char	*res;
	int		flag;

	res = str;
	flag = 1;
	ft_strtolower(str);
	while (*str)
	{
		if (*str > 'z' || *str < 'a')
			flag = 1;
		if (*str <= '9' && *str >= '0')
			flag = 0;
		if (*str <= 'z' && *str >= 'a')
		{
			if (flag)
			{
				*str = *str - 32;
				flag = 0;
			}
		}
		str++;
	}
	return (res);
}
