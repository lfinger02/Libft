/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:12:49 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/06 14:14:35 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void) {
  char s1[50] = "qwer";
  char s2[50] = "";
  char s3[50] = "qwer";
  char s4[50] = "";

  ft_memccpy(s2, s1, 't', 4);
  memccpy(s4, s3, 't', 4);

  printf("s2 %s\n", s2);
  printf("s4 %s\n", s4);
 
  return 0;
}
