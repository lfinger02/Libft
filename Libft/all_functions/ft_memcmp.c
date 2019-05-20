/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:32:14 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/20 11:36:57 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *p = str1;
	unsigned char *q = str2;

	while (n > 0)
	{
		if (*p != *q)
		{
			return (*p - *q);
		}
		n--;
		p++;
		q++;
	}
	return (0);
}
