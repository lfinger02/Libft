/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memeset.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:18:42 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/20 09:32:10 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *sAddress, int vToFill, size_t wToFill)
{
	while (wToFill > 0)
	{
		wToFill--;
		((unsigned char *)sAddress)[wToFill] = (unsigned char)vToFill;
	}
	return (sAddress);
}
