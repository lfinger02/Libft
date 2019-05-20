/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:48:12 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/20 10:52:31 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(char *dest, char *src, int count)
{
	char *tAddress;
	char *addressToSrcC;

	if (dest <= src)
	{
		tAddress = dest;
		addressToSrcC = src;
		while (count--)
		{
			*tAddress++ = *addressToSrcC++;
		}
	} else
	{
		tAddress = dest;
		tAddress += count;
		addressToSrcC = src;
		addressToSrcC += count;
		while (count--)
		{
			*--tAddress = *--addressToSrcC;
		}
	}
	return (dest);
}
