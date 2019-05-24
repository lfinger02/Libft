/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:02:50 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/24 12:05:19 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i++] != '\0' && i < n)
		dest[j++] = src[i];
	dest[j] = '\0';
	return (dest);
}
