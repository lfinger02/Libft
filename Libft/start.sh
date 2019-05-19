
echo $(clear)

echo "Please type in your name ?"

read name

echo "

| |   (_) |    / _| |  
| |    _| |__ | |_| |_ 
| |   | | '_ \|  _| __|
| |___| | |_) | | | |_ 
\_____/_|_.__/|_|  \__|
     ";

echo "$(tput setaf 1)Welcome to the Libft guide $(tput setab 9)Press enter...$(tput sgr 0)"

read

string='functions for the rest of the program.'

for ((i=0; i<=${#string}; i++)); do
    printf '%s' "${string:$i:1}"
    sleep 0.$(( (RANDOM % 5) + 1000 ))
done

function ask_user() {    

echo -e "
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
| 1.) Functions                      |
| 2.) Clone Already made project     |
| 3.) Quit                           |
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#\n"

read -e -p "$name can you please make a choice " choice

if [ "$choice" == "1" ]; then

echo $(clear)

echo "
░░░░░▄▄▀▀▀▀▀▀▀▀▀▄▄░░░░░
░░░░█░░░░░░░░░░░░░█░░░░
░░░█░░░░░░░░░░▄▄▄░░█░░░
░░░█░░▄▄▄░░▄░░███░░█░░░
░░░▄█░▄░░░▀▀▀░░░▄░█▄░░░
░░░█░░▀█▀█▀█▀█▀█▀░░█░░░
░░░▄██▄▄▀▀▀▀▀▀▀▄▄██▄░░░
░▄█░█▀▀█▀▀▀█▀▀▀█▀▀█░█▄░ ";


echo -e "
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
| 1.) Libc Functionsecho  $(tput setaf 1)Some of the standard C functions$(tput sgr0)
| 2.) Additional functions $(tput setaf 1)Functions 42 deems will be useful for later projects$(tput sgr0)
| 3.) Bouns Functions $(tput setaf 1)Functions 42 deems will be useful for linked list manipulation$(tput sgr0)
| 4.) Persnal Functions $(tput setaf 1)Functions I believe will be useful later.$(tput sgr0)
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#
\n"

read -e -p "Which functions do you want to start with $name ?" choiceF

if [ "$choiceF" == "1" ]; then

echo "$(tput setaf 8)
$(tput setaf 6)1)$(tput sgr0) ft_atoi.c    $(tput setaf 2)int        ft_atoi(const char *str)$(tput sgr0)
$(tput setaf 6)2)$(tput sgr0) ft_bzero.c   $(tput setaf 2)void      t_bzero(void *s, size_t n)$(tput sgr0)
$(tput setaf 6)3)$(tput sgr0) ft_isalnum.c $(tput setaf 2)int        ft_isalnum(int c)$(tput sgr0)
$(tput setaf 6)4)$(tput sgr0) ft_isalpha.c $(tput setaf 2)int        ft_isalpha(int c)$(tput sgr0)
$(tput setaf 6)5)$(tput sgr0) ft_isascii.c $(tput setaf 2)int        ft_isascii(int c)$(tput sgr0)
$(tput setaf 6)6)$(tput sgr0) ft_isdigit.c $(tput setaf 2)int        ft_isdigit(int c)$(tput sgr0)
$(tput setaf 6)7)$(tput sgr0) ft_isprint.c $(tput setaf 2)int        ft_isprint(int c)$(tput sgr0)
$(tput setaf 6)8)$(tput sgr0) ft_memccpy.c $(tput setaf 2)void    *ft_memccpy(void *dst, const void *src, int c, size_t n)$(tput sgr0)
$(tput setaf 6)9)$(tput sgr0) ft_memchr.c  $(tput setaf 2)void    *ft_memchr(const void *s, int c, size_t n)$(tput sgr0)
$(tput setaf 6)10)$(tput sgr0) ft_memcmp.c $(tput setaf 2)int        ft_memcmp(const void *s1, const void *s2, size_t n)$(tput sgr0)
$(tput setaf 6)11)$(tput sgr0) ft_memcpy.c $(tput setaf 2)void    *ft_memcpy(void *dst, const void *src, size_t n)$(tput sgr0)
$(tput setaf 6)12)$(tput sgr0) ft_memmove.c$(tput setaf 2)void    *ft_memmove(void *dst, const void *src, size_t len)$(tput sgr0)
$(tput setaf 6)13)$(tput sgr0) ft_memset.c $(tput setaf 2)void    *ft_memset(void *b, int c, size_t len)$(tput sgr0)
$(tput setaf 6)14)$(tput sgr0) ft_strcat.c $(tput setaf 2)char    *ft_strcat(char *s1, const char *s2)$(tput sgr0)
$(tput setaf 6)15)$(tput sgr0) ft_strchr.c $(tput setaf 2)char    *ft_strchr(const char *s, int c)$(tput sgr0)
$(tput setaf 6)16)$(tput sgr0) ft_strcmp.c $(tput setaf 2)int        ft_strcmp(const char *s1, const char *s2)$(tput sgr0)
$(tput setaf 6)17)$(tput sgr0) ft_strcpy.c $(tput setaf 2)char    *ft_strcpy(char *dst, const char *src)$(tput sgr0)
$(tput setaf 6)18)$(tput sgr0) ft_strdup.c $(tput setaf 2)char    *ft_strdup(const char *s1)$(tput sgr0)
$(tput setaf 6)19)$(tput sgr0) ft_strlcat.c$(tput setaf 2)char    *ft_strcat(char *s1, const char *s2)$(tput sgr0)
$(tput setaf 6)20)$(tput sgr0) ft_strlen.c $(tput setaf 2)int        ft_strlen(const char *s)$(tput sgr0)
$(tput setaf 6)21)$(tput sgr0) ft_strncat.c$(tput setaf 2)char    *ft_strncat(char *s1, const char *s2, size_t n)$(tput sgr0)
$(tput setaf 6)22)$(tput sgr0) ft_strncmp.c$(tput setaf 2)int        ft_strncmp(const char *s1, const char *s2, size_t n)$(tput sgr0)
$(tput setaf 6)23)$(tput sgr0) ft_strncpy.c$(tput setaf 2)char    *ft_strncpy(char *dst, const char *src, size_t len)$(tput sgr0)
$(tput setaf 6)24)$(tput sgr0) ft_strndup.c$(tput setaf 2)char    *ft_strndup(const char *s1, size_t n)$(tput sgr0)
$(tput setaf 6)25)$(tput sgr0) ft_strnstr.c$(tput setaf 2)char    *ft_strnstr(const char *big, const char *little, size_t len)$(tput sgr0)
$(tput setaf 6)26)$(tput sgr0) ft_strrchr.c$(tput setaf 2)char    *ft_strrchr(const char *s, int c)$(tput sgr0)
$(tput setaf 6)27)$(tput sgr0) ft_strstr.c $(tput setaf 2)char    *ft_strstr(const char *big, const char *little)$(tput sgr0)
$(tput setaf 6)28)$(tput sgr0) ft_tolower.c$(tput setaf 2)int        ft_tolower(int c)$(tput sgr0)
$(tput setaf 6)29)$(tput sgr0) ft_toupper.c$(tput sgr0)"

read -e -p "Which function do you want to start with type the number number $name ?" choiceF2
echo $(clear)




elif [ "$choiceF" == "2" ]; then


echo "
We Dont Have That Yet!
░░░░░░░░░░░█▀▀░░█░░░░░░
░░░░░░▄▀▀▀▀░░░░░█▄▄░░░░
░░░░░░█░█░░░░░░░░░░▐░░░
░░░░░░▐▐░░░░░░░░░▄░▐░░░
░░░░░░█░░░░░░░░▄▀▀░▐░░░
░░░░▄▀░░░░░░░░▐░▄▄▀░░░░
░░▄▀░░░▐░░░░░█▄▀░▐░░░░░
░░█░░░▐░░░░░░░░▄░█░░░░░
░░░█▄░░▀▄░░░░▄▀▐░█░░░░░
░░░█▐▀▀▀░▀▀▀▀░░▐░█░░░░░
░░▐█▐▄░░▀░░░░░░▐░█▄▄░░░
░░░▀▀▄░░░░░░░░▄▐▄▄▄▀░░░
░░░░░░░░░░░░░░░░░░░░░░░
";
echo "" && sleep 3 && clear && ask_user

elif [ "$choiceF" == "3" ]; then

echo "Bouns Functions"
echo "
We Dont Have That Yet!
░░░░░░░░░░░█▀▀░░█░░░░░░
░░░░░░▄▀▀▀▀░░░░░█▄▄░░░░
░░░░░░█░█░░░░░░░░░░▐░░░
░░░░░░▐▐░░░░░░░░░▄░▐░░░
░░░░░░█░░░░░░░░▄▀▀░▐░░░
░░░░▄▀░░░░░░░░▐░▄▄▀░░░░
░░▄▀░░░▐░░░░░█▄▀░▐░░░░░
░░█░░░▐░░░░░░░░▄░█░░░░░
░░░█▄░░▀▄░░░░▄▀▐░█░░░░░
░░░█▐▀▀▀░▀▀▀▀░░▐░█░░░░░
░░▐█▐▄░░▀░░░░░░▐░█▄▄░░░
░░░▀▀▄░░░░░░░░▄▐▄▄▄▀░░░
░░░░░░░░░░░░░░░░░░░░░░░
";
echo "" && sleep 3 && clear && ask_user

elif [ "$choiceF" == "4" ]; then

echo "
We Dont Have That Yet!
░░░░░░░░░░░█▀▀░░█░░░░░░
░░░░░░▄▀▀▀▀░░░░░█▄▄░░░░
░░░░░░█░█░░░░░░░░░░▐░░░
░░░░░░▐▐░░░░░░░░░▄░▐░░░
░░░░░░█░░░░░░░░▄▀▀░▐░░░
░░░░▄▀░░░░░░░░▐░▄▄▀░░░░
░░▄▀░░░▐░░░░░█▄▀░▐░░░░░
░░█░░░▐░░░░░░░░▄░█░░░░░
░░░█▄░░▀▄░░░░▄▀▐░█░░░░░
░░░█▐▀▀▀░▀▀▀▀░░▐░█░░░░░
░░▐█▐▄░░▀░░░░░░▐░█▄▄░░░
░░░▀▀▄░░░░░░░░▄▐▄▄▄▀░░░
░░░░░░░░░░░░░░░░░░░░░░░
";
echo "" && sleep 3 && clear && ask_user

else

echo "Please select 1, 2, or 3." && sleep 3
clear && ask_user

fi


elif [ "$choice" == "2" ]; then

echo "Okay am about to clone your project in your current directory ";
echo $(pwd)
echo $(ls)
echo $(git clone https://github.com/R4meau/libft.git) && sleep 3

echo $(cd libft)
echo $(pwd)
echo $(ls)


elif [ "$choice" == "3" ]; then

    clear && exit 0

else

    echo "Come on $name Please decide 1, 2, or 3." && sleep 3
    clear && ask_user

fi
}

ask_user
