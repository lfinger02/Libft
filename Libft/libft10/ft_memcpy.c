/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:12:04 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/08 08:56:56 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*copy_to;
	const char	*to_copy;

	copy_to = dest;
	to_copy = src;
	if (src == dest)
	{
		return ((char *)src);
	}
	while (n)
	{
		*copy_to++ = *to_copy++;
		n--;
	}
	return (dest);
}
