/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:21:56 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/24 11:24:03 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t len;
	char *dst;

	len = ft_strlen(src) + 1;
	dst = malloc(len);
	if (dst == NULL)
	{
		return (NULL);
	}
	ft_memcpy(dst, src, len);
	return (dst);
}
