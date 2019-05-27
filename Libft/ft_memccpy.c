/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:29:30 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/23 12:33:50 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str_dest, const void *str_src, int c, size_t n)
{
	unsigned int i;
	char *dest;
	char *src;
	char *ptr;

	dest = (char *)str_dest;
	src = (char *)str_src;
	i = 0;
	ptr = 0;
	while (i < n && ptr == 0)
	{
		*(dest + i) = *(src + i);
		if (src[i] == ((char)c))
		{
			ptr = dest + i + 1;
		}
		i++;
	}
	return (ptr);
}
