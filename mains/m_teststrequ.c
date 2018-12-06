#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int     ft_strequ(char const *s1, char const *s2);
int                main(void)
{
    int            ret;
    char        *str;
    
    ft_strequ(NULL, NULL);
    ft_strequ("", NULL);
    ft_strequ(NULL, "");
    ret = 0;
    str = strdup("abc"); /* FIX un faux OK si l'user a mis "if s1 == s2 return 1;" */
    if ((ret = ft_strequ(str, "abc")) != 1)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"abc\", \"abc\").\nExpected ret = \"1\" \
               but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, ret);
        free(str);
        return (0);
    }
    free(str);
    if ((ret = ft_strequ("cba", "abc")) != 0)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"cba\", \"abc\").\nExpected ret = \"0\" \
               but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, ret);
        return (0);
    }
    if ((ret = ft_strequ("abc", "cba")) != 0)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"abc\", \"cba\").\nExpected ret = \"0\" \
               but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, ret);
        return (0);
    }
    if ((ret = ft_strequ("", "")) != 1)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"\", \"\").\nExpected ret = \"1\" \
               but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, ret);
        return (0);
    }
    if ((ret = ft_strequ("abc", "abcd")) != 0)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"abc\", \"abcd\").\nExpected ret = \"0\" \
               but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, ret);
        return (0);
    }
    if ((ret = ft_strequ("abcd", "abc")) != 0)
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strequ(\"abcd\", \"abc\").\nExpected ret = \"0\" \
               but have ret = \"%d\"\033[0m\n", __LINE__ - 2, __func__, ret);
        return (0);
    }
    return (1);
}
