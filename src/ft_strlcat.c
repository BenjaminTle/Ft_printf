/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btollie <btollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:28:23 by btollie           #+#    #+#             */
/*   Updated: 2019/04/05 17:15:12 by btollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size < len_dst)
		return (size + len_src);
	while (src[i] && i + 1 + len_dst < size)
	{
		dst[i + len_dst] = src[i];
		i++;
	}
	dst[i + len_dst] = '\0';
	return (len_dst + len_src);
}
