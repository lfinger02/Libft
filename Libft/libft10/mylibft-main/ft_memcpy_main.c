/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:11:11 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/06 14:12:32 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main () {
   const char src[50] = "http://www.lesegofinger.com";
   char dest[50];
   ft_strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, ft_strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
