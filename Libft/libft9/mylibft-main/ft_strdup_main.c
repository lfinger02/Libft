/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:24:24 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/06 14:25:41 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include "libft.h" 
  
int main() 
{ 
    char source[] = "GeeksForGeeks"; 
   
    char* target = ft_strdup(source);  
  
    printf("%s", target); 
    return 0; 
} 
