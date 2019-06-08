/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:25:54 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/06 14:26:46 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main () {
   char src[40];
   char dest[100];
  
   ft_memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "This is tutorialspoint.com");
   ft_strcpy(dest, src);

   printf("Final copied string : %s\n", dest);
   
   return(0);
}
