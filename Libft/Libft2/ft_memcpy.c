/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:12:04 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/23 12:15:17 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t i;
	char *ptr;
	char *ptr2;

	ptr = str1;
	ptr2 = (char *)str2;
	i = 0;
	while (i < n)
	{
		i++;
		ptr[i] = ptr2[i];
	}
	return (str1);
}
