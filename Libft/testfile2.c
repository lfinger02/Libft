#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

int main()
{
 char str[6] = "HELL";
 char to_find[] = "dk";

 
 printf("%s", ft_strcat(str, to_find));
 
 return(0);
}
