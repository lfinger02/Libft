/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:38:03 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/27 11:40:30 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	unsigned char c2;
	unsigned char *str2;

	i = 0;
	str2 = (unsigned char*) str;
	c2 = (unsigned char)c;
	while (i < n)
	{
		if (str2[i] == c2)
			return (&str2[i]);
		i++;
	}
	return (NULL);
}
