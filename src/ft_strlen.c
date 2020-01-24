/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btollie <btollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:30:50 by btollie           #+#    #+#             */
/*   Updated: 2019/04/05 17:15:12 by btollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_byte_mask(unsigned long long c)
{
	if (!(c & 0xFF))
		return (1);
	if (!(c & 0xFF00))
		return (2);
	if (!(c & 0xFF0000))
		return (3);
	if (!(c & 0xFF000000))
		return (4);
	if (!(c & 0xFF00000000))
		return (5);
	if (!(c & 0xFF0000000000))
		return (6);
	if (!(c & 0xFF000000000000))
		return (7);
	if (!(c & 0xFF00000000000000))
		return (8);
	else
		return (0);
}

size_t			ft_strlen(const char *s)
{
	size_t				len;
	unsigned long long	*c;
	size_t				ret;

	len = 0;
	c = (unsigned long long *)s;
	while (1)
	{
		ret = ft_byte_mask(*c);
		if (ret)
			return (len + ret - 1);
		c++;
		len += 8;
	}
}
