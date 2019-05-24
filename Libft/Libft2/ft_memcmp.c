/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:48:42 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/24 10:10:05 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{

	while (n > 0)
	{
		if (str1 != str2)
		{
			return (str1 - str2);
		}
		n--;
		str1++;
		str2++;
	}
	return (0);
}