/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:25:59 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/23 15:52:44 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *use_dest;
	unsigned char *use_src;

	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		use_dest = (unsigned char *)dest;
		use_src = (unsigned char *)src;
		use_dest += n;
		use_src += n;
		while (n--)
		{
			*(--use_dest) = *(--use_src);
		}
	}
	return (dest);
}
