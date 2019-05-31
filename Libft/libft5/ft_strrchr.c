/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:02:27 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/27 12:18:14 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *last;

	last = NULL;
	while (1)
	{
		if (*str == c)
		{
			last = (char *)str;
		}
		if (*str == '\0')
		{
			return (char *)last;
		}
		str++;
	}
}
