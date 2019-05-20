/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:17:25 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/20 10:23:15 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcmp(void *dest, void *src, size_t n)
{
	char *addressToSrcC;
	char *addressToDestC;
	int i;

	addressToSrcC = (char *)src;
	addressToDestC = (char *)dest;
	i = 0;
	while (i < n)
	{
		addressToDestC[i] = addressToSrcC[i];
		i++;
	}
}
