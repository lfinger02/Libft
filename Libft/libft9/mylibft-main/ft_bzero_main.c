/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:18:06 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/06 14:19:58 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main ()
{
   char str[50];

   ft_strcpy(str,"This is string.h library function");
   puts(str);

   ft_bzero(str, 2);
   puts(str);
   
   return(0);
}
