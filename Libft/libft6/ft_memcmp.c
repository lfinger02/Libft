/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:48:42 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/27 11:20:31 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned const char *t;
	unsigned const char *d;
	size_t				i;

	t = str1;
	d = str2;
	i = 0;
	while (i < n)
	{
		if (t[i] != d[i])
			return (t[i] - d[i]);
		i++;
	}
	return (0);
}
