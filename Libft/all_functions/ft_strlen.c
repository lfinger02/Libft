/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:49:20 by lfinger           #+#    #+#             */
/*   Updated: 2019/05/22 13:57:50 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t i;
	signed char *string_len;

	string_len = str;
	i = 0;
	while (string_len[i] != '\0')
		string_len[i++];
	return (i);
}
