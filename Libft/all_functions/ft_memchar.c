/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:05:39 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/20 11:23:55 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchar(const void *str, int c, size_t n)
{
	if (n != 0)
	{
		const unsigned char *p = str;

		while (n-- != 0)
		{
			if (*p == c)
			{
				return ((void *)(p - 1));
			}
		}
	}
	return (NULL);
}
