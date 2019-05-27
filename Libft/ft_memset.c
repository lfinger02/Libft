/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:08:44 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/23 11:51:48 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	char *firstC;
	size_t i;

	firstC = ptr;
	i = 0;
	while (i < n)
	{
		firstC[i] = x;
		i++;
	}
	return (ptr);
}
