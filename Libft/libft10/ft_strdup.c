/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 10:19:53 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/08 11:06:48 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup_str;
	int		i;

	if (!(dup_str = malloc(sizeof(char) * (ft_strlen(src) + 1))))
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		ft_strcpy(dup_str, src);
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}
