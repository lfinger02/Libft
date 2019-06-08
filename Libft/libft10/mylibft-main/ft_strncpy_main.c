/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:26:54 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/06 14:28:06 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
 char str[] = "asdfasdfasdf";
 char dest[] = "there";
 int n = 5;
 
 printf("%s\n", ft_strncpy(dest, str, n));
 printf("%s\n", ft_strncpy(dest, "qwerty", 4));
 printf("%s\n", ft_strncpy(dest, "z", 1));
 
 return(0);
}
