#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>


int main() {
    // int to_lower_1 = ft_tolower('H');
    // printf("tolower = %c\n", to_lower_1);
    // int to_lower_2 = ft_tolower('A');
    // printf("tolower = %c\n", to_lower_2);
    // int to_lower_3 = ft_tolower('a');
    // printf("tolower = %c\n", to_lower_3);
    // int to_lower_4 = ft_tolower('z');
    // printf("tolower = %c\n", to_lower_4);
    // int to_lower_5 = ft_tolower('Z');
    // printf("tolower = %c\n\n", to_lower_5);



    // int to_upper_1 = ft_toupper('p');
    // printf("toupper = %c\n", to_upper_1);
    // int to_upper_2 = ft_toupper('P');
    // printf("toupper = %c\n", to_upper_2);
    // int to_upper_3 = ft_toupper('a');
    // printf("toupper = %c\n", to_upper_3);
    // int to_upper_4 = ft_toupper('A');
    // printf("toupper = %c\n", to_upper_4);
    // int to_upper_5 = ft_toupper('z');
    // printf("toupper = %c\n\n", to_upper_5);



    // printf("isprint = %d\n", ft_isprint('x'));
    // printf("isprint = %d\n", ft_isprint('\t'));
    // printf("isprint = %d\n", ft_isprint(' '));
    // printf("isprint = %d\n", ft_isprint('1'));
    // printf("isprint = %d\n\n", ft_isprint(127));



    // printf("isascii = %d\n", ft_isascii('x'));
    // printf("isascii = %d\n", ft_isascii(0));
    // printf("isascii = %d\n", ft_isascii(-2));
    // printf("isascii = %d\n", ft_isascii(128));
    // printf("isascii = %d\n\n", ft_isascii(127));



    // printf("isalnum = %d\n", ft_isalnum('x'));
    // printf("isalnum = %d\n", ft_isalnum('1'));
    // printf("isalnum = %d\n", ft_isalnum(']'));
    // printf("isalnum = %d\n", ft_isalnum(0));
    // printf("isalnum = %d\n\n", ft_isalnum(90));



    // printf("isdigit = %d\n", ft_isdigit(90));
    // printf("isdigit = %d\n", ft_isdigit('1'));
    // printf("isdigit = %d\n", ft_isdigit('a'));
    // printf("isdigit = %d\n", ft_isdigit('z'));
    // printf("isdigit = %d\n\n", ft_isdigit('0'));



    // printf("isalpha = %d\n", ft_isalpha('z'));
    // printf("isalpha = %d\n", ft_isalpha('a'));
    // printf("isalpha = %d\n", ft_isalpha('1'));
    // printf("isalpha = %d\n", ft_isalpha('0'));
    // printf("isalpha = %d\n\n", ft_isalpha(126));



    // char str_2[12] = "Hello World";
    // memset(str_2, 'y', 5);
    // printf("%s\n", str_2);

    // char str_1[12] = "Hello World";
    // ft_memset(str_1, 'y', 5);
    // printf("%s\n", str_1);

    // char str_4[12] = "";
    // memset(str_4, 'y', 5);
    // printf("%s\n", str_4);

    // char str_3[12] = "";
    // ft_memset(str_3, 'y', 5);
    // printf("%s\n\n", str_3);

    // char str_6[12] = "Hello World";
    // memset(str_6, 'y', 22);
    // printf("%s\n\n", str_6);

    // char str_5[12] = "Hello World";
    // ft_memset(str_5, 'y', 22);
    // printf("%s\n", str_5);



    // char str_7[12] = "Hello World";
    // bzero(str_7, 5);
    // printf("bzero = %s\n", str_7);

    // char str_8[12] = "Hello World";
    // ft_bzero(str_8, 5);
    // printf("ft_bzero = %s\n", str_8);

    // char str_12[12] = "Hello World";
    // bzero(str_12, 0);
    // printf("bzero = %s\n", str_12);

    // char str_9[12] = "Hello World";
    // ft_bzero(str_9, 0);
    // printf("ft_bzero = %s\n", str_9);

    // char str_10[12] = "Hello World";
    // bzero(str_10, 12);
    // printf("bzero = %s\n", str_10);

    // char str_11[12] = "Hello World";
    // ft_bzero(str_11, 12);
    // printf("ft_bzero = %s\n\n", str_11);




    // char *dst;
    // dst = (char *)malloc(sizeof(char) * 12);
    // dst = strcpy(dst, "Hello world");
    // memcpy(dst, "KAMIL", 3);
    // printf("dst = %s\n", dst);
    
    // char *dst_1;
    // dst_1 = (char *)malloc(sizeof(char) * 12);
    // dst_1 = strcpy(dst_1, "Hello world");
    // ft_memcpy(dst_1, "KAMIL", 3);
    // printf("dst_1 = %s\n", dst_1);

    // char *dst_2;
    // dst_2 = (char *)malloc(sizeof(char) * 12);
    // dst_2 = strcpy(dst_2, "Hello world");
    // memcpy(dst_2, "KAMIL", 11);
    // printf("dst_2 = %s\n", dst_2);
    
    // char *dst_3;
    // dst_3 = (char *)malloc(sizeof(char) * 12);
    // dst_3 = strcpy(dst_3, "Hello world");
    // ft_memcpy(dst_3, "KAMIL", 11);
    // printf("dst_3 = %s\n", dst_3);

    // char *dst_4;
    // dst_4 = (char *)malloc(sizeof(char) * 12);
    // dst_4 = strcpy(dst_4, "Hello world");
    // memcpy(dst_4, "KAMILISHERE", 11);
    // printf("dst_4 = %s\n", dst_4);
    
    // char *dst_5;
    // dst_5 = (char *)malloc(sizeof(char) * 12);
    // dst_5 = strcpy(dst_5, "Hello world");
    // ft_memcpy(dst_5, "KAMILISHERE", 11);
    // printf("dst_5 = %s\n", dst_5);



    // char *dst;
    // dst = (char *)malloc(sizeof(char) * 12);
    // dst = strcpy(dst, "Hello world");
    // printf("%s\n", memccpy(dst, "KAMIL", 'L', 3));
    
    // char *dst_1;
    // dst_1 = (char *)malloc(sizeof(char) * 12);
    // dst_1 = strcpy(dst_1, "Hello world");
    // printf("%s\n", ft_memccpy(dst_1, "KAMIL", 'L', 3));

    // char *dst_2;
    // dst_2 = (char *)malloc(sizeof(char) * 12);
    // dst_2 = strcpy(dst_2, "Hello world");
    // printf("%s\n", memccpy(dst_2, "KAMIL", 'M', 11));
    
    // char *dst_3;
    // dst_3 = (char *)malloc(sizeof(char) * 12);
    // dst_3 = strcpy(dst_3, "Hello world");
    // printf("%s\n", ft_memccpy(dst_3, "KAMIL", 'M', 11));

    // char *dst_4;
    // dst_4 = (char *)malloc(sizeof(char) * 12);
    // dst_4 = strcpy(dst_4, "Hello world");
    // printf("%s\n", memccpy(dst_4, "KAMILISHERE", 'S', 11));
    
    // char *dst_5;
    // dst_5 = (char *)malloc(sizeof(char) * 12);
    // dst_5 = strcpy(dst_5, "Hello world");
    // printf("%s\n", ft_memccpy(dst_5, "KAMILISHERE", 'S', 11));



    // char *dst;
    // dst = (char *)malloc(sizeof(char) * 12);
    // dst = strcpy(dst, "Hello world");
    // memmove(dst, "KAMIL", 3);
    // printf("dst = %s\n", dst);
    
    // char *dst_1;
    // dst_1 = (char *)malloc(sizeof(char) * 12);
    // dst_1 = strcpy(dst_1, "Hello world");
    // ft_memmove(dst_1, "KAMIL", 3);
    // printf("dst_1 = %s\n", dst_1);

    // char *dst_2;
    // dst_2 = (char *)malloc(sizeof(char) * 12);
    // dst_2 = strcpy(dst_2, "Hello world");
    // memmove(dst_2, "KAMIL", 11);
    // printf("dst_2 = %s\n", dst_2);
    
    // char *dst_3;
    // dst_3 = (char *)malloc(sizeof(char) * 12);
    // dst_3 = strcpy(dst_3, "Hello world");
    // ft_memmove(dst_3, "KAMIL", 11);
    // printf("dst_3 = %s\n", dst_3);

    // char *dst_4;
    // dst_4 = (char *)malloc(sizeof(char) * 12);
    // dst_4 = strcpy(dst_4, "Hello world");
    // memmove(dst_4, "KAMILISHERE", 11);
    // printf("dst_4 = %s\n", dst_4);
    
    // char *dst_5;
    // dst_5 = (char *)malloc(sizeof(char) * 12);
    // dst_5 = strcpy(dst_5, "Hello world");
    // ft_memmove(dst_5, "KAMILISHERE", 11);
    // printf("dst_5 = %s\n", dst_5);



    // printf("%d\n", memcmp("Hello world", "Hello world", 11));
    // printf("%d\n", ft_memcmp("Hello world", "Hello world", 11));
    // printf("%d\n", memcmp("Hello worl", "Hello world", 10));
    // printf("%d\n", ft_memcmp("Hello worl", "Hello world", 10));
    // printf("%d\n", memcmp("Hello world", "Hello", 6));
    // printf("%d\n", ft_memcmp("Hello world", "Hello", 6));
    // printf("%d\n", memcmp("Hello world", "ello world", 11));
    // printf("%d\n", ft_memcmp("Hello world", "ello world", 11));
    // printf("%d\n", memcmp("Hello word", "Hello world", 3));
    // printf("%d\n", ft_memcmp("Hello word", "Hello world", 3));



    // printf("%s\n", memchr("Hello World", 'c', 12));
    // printf("%s\n", ft_memchr("Hello World", 'c', 12));
    // printf("%s\n", memchr("Hello World", 'H', 12));
    // printf("%s\n", ft_memchr("Hello World", 'H', 12));
    // printf("%s\n", memchr("Hello World", 'd', 5));
    // printf("%s\n", ft_memchr("Hello World", 'd', 5));
    // printf("%s\n", memchr("Hello World", 'e', 12));
    // printf("%s\n", ft_memchr("Hello World", 'e', 12));
    // printf("%s\n", memchr("", 'e', 12));
    // printf("%s\n", ft_memchr("", 'e', 12));



    // printf("%lu\n", strlen("Hello World"));
    // printf("%lu\n", ft_strlen("Hello World"));
    // printf("%lu\n", strlen("Hello "));
    // printf("%lu\n", ft_strlen("Hello "));
    // printf("%lu\n", strlen("Hel World"));
    // printf("%lu\n", ft_strlen("Hel World"));



    // char *dst;
    // dst = (char *)malloc(sizeof(char) * 12);
    // printf("%lu\n", strlcpy(dst, "Hello world", 12));
    // printf("%s\n", dst);

    // char *dst_1;
    // dst_1 = (char *)malloc(sizeof(char) * 12);
    // printf("%lu\n", ft_strlcpy(dst_1, "Hello world", 12));
    // printf("%s\n", dst_1);

    // char *dst_2;
    // dst_2 = (char *)malloc(sizeof(char) * 12);
    // printf("%lu\n", strlcpy(dst_2, "Hello world", 5));
    // printf("%s\n", dst_2);

    // char *dst_3;
    // dst_3 = (char *)malloc(sizeof(char) * 12);
    // printf("%lu\n", ft_strlcpy(dst_3, "Hello world", 5));
    // printf("%s\n", dst_3);

    // char *dst_4;
    // dst_4 = (char *)malloc(sizeof(char) * 11);
    // printf("%lu\n", strlcpy(dst_4, "Hello world", 12));
    // printf("%s\n", dst_4);

    // char *dst_5;
    // dst_5 = (char *)malloc(sizeof(char) * 11);
    // printf("%lu\n", ft_strlcpy(dst_5, "Hello world", 12));
    // printf("%s\n", dst_5);

    // char *dst_6;
    // dst_6 = (char *)malloc(sizeof(char) * 18);
    // dst_6 = strcpy(dst, "ffffffff");
    // printf("%lu\n", strlcpy(dst_6, "world", 18));
    // printf("%s\n", dst_6);

    // char *dst_7;
    // dst_7 = (char *)malloc(sizeof(char) * 18);
    // dst_7 = strcpy(dst, "fffffffff");
    // printf("%lu\n", ft_strlcpy(dst_7, "world", 18));
    // printf("%s\n", dst_7);

    // char *dst_8;
    // dst_8 = (char *)malloc(sizeof(char) * 12);
    // dst_8 = strcpy(dst, "hello ");
    // printf("%lu\n", strlcpy(dst_8, "world", 5));
    // printf("%s\n", dst_8);

    // char *dst_9;
    // dst_9 = (char *)malloc(sizeof(char) * 12);
    // dst_9 = strcpy(dst, "hello ");
    // printf("%lu\n", ft_strlcpy(dst_9, "world", 5));
    // printf("%s\n", dst_9);



    // char *dst;
    // dst = (char *)malloc(sizeof(char) * 12);
    // printf("%lu\n", strlcat(dst, "Hello world", 12));
    // printf("%s\n", dst);

    // char *dst_1;
    // dst_1 = (char *)malloc(sizeof(char) * 12);
    // printf("%lu\n", ft_strlcat(dst_1, "Hello world", 12));
    // printf("%s\n", dst_1);

    // char *dst_2;
    // dst_2 = (char *)malloc(sizeof(char) * 12);
    // printf("%lu\n", strlcat(dst_2, "Hello world", 12));
    // printf("%s\n", dst_2);

    // char *dst_3;
    // dst_3 = (char *)malloc(sizeof(char) * 12);
    // printf("%lu\n", ft_strlcat(dst_3, "Hello world", 12));
    // printf("%s\n", dst_3);

    // char *dst_4;
    // dst_4 = (char *)malloc(sizeof(char) * 12);
    // printf("%lu\n", strlcat(dst_4, "Hello world", 12));
    // printf("%s\n", dst_4);

    // char *dst_5;
    // dst_5 = (char *)malloc(sizeof(char) * 12);
    // printf("%lu\n", ft_strlcat(dst_5, "Hello world", 12));
    // printf("%s\n", dst_5);

    // char *dst_6;
    // dst_6 = (char *)malloc(sizeof(char) * 18);
    // dst_6 = strcpy(dst, "fffffffff");
    // printf("%lu\n", strlcat(dst_6, "world", 18));
    // printf("%s\n", dst_6);

    // char *dst_7;
    // dst_7 = (char *)malloc(sizeof(char) * 18);
    // dst_7 = strcpy(dst, "fffffffff");
    // printf("%lu\n", ft_strlcat(dst_7, "world", 18));
    // printf("%s\n", dst_7);

    // char *dst_8;
    // dst_8 = (char *)malloc(sizeof(char) * 12);
    // dst_8 = strcpy(dst, "hello ");
    // printf("%lu\n", strlcat(dst_8, "world", 12));
    // printf("%s\n", dst_8);

    // char *dst_9;
    // dst_9 = (char *)malloc(sizeof(char) * 12);
    // dst_9 = strcpy(dst, "hello ");
    // printf("%lu\n", ft_strlcat(dst_9, "world", 12));
    // printf("%s\n", dst_9);    



    // printf("%s\n", strchr("Hello World", 'c'));
    // printf("%s\n", ft_strchr("Hello World", 'c'));
    // printf("%s\n", strchr("Hello World", 'H'));
    // printf("%s\n", ft_strchr("Hello World", 'H'));
    // printf("%s\n", strchr("Hello World", 'd'));
    // printf("%s\n", ft_strchr("Hello World", 'd'));
    // printf("%s\n", strchr("Hello \0World", 'e'));
    // printf("%s\n", ft_strchr("Hello \0World", 'e'));
    // printf("%s\n", strchr("Hello \0World", '\0'));
    // printf("%s\n", ft_strchr("Hello \0World", '\0'));
    // printf("%s\n", strchr("", 'e'));
    // printf("%s\n", ft_strchr("", 'e'));
	// char	str3[] = "";

	// // ft_strchr(str3, '\0');
	// strchr(str3, '\0');
	// printf("str3 = [%s]\n", str3);



    // printf("%s\n", strrchr("Hello World", 'c'));
    // printf("%s\n", ft_strrchr("Hello World", 'c'));
    // printf("%s\n", strrchr("Hello World", 'H'));
    // printf("%s\n", ft_strrchr("Hello World", 'H'));
    // printf("%s\n", strrchr("Hello World", 'd'));
    // printf("%s\n", ft_strrchr("Hello World", 'd'));
    // printf("%s\n", strrchr("Hello \0World", 'e'));
    // printf("%s\n", ft_strrchr("Hello \0World", 'e'));
    // printf("%s\n", strrchr("", 'e'));
    // printf("%s\n", ft_strrchr("", 'e'));



    // printf("%s\n", strnstr("I am a software engineer", "am", 10));
    // printf("%s\n", ft_strnstr("I am a software engineer", "am", 10));
    // printf("%s\n", strnstr("I am a software engineer", "I", 0));
    // printf("%s\n", ft_strnstr("I am a software engineer", "I", 0));
    // printf("%s\n", strnstr("I am a software engineer", "engineer", 25));
    // printf("%s\n", ft_strnstr("I am a software engineer", "engineer", 25));
    // printf("%s\n", strnstr("I am a software engineer", "soft", 10));
    // printf("%s\n", ft_strnstr("I am a software engineer", "soft", 10));
    // printf("%s\n", strnstr("I am a software engineer", "a", 2));
    // printf("%s\n", ft_strnstr("I am a software engineer", "a", 2));



    // printf("%d\n", strncmp("Hello world", "Hello world", 11));
    // printf("%d\n", ft_strncmp("Hello world", "Hello world", 11));
    // printf("%d\n", strncmp("Hello worl", "Hello world", 10));
    // printf("%d\n", ft_strncmp("Hello worl", "Hello world", 10));
    // printf("%d\n", strncmp("Hello world", "Hello", 6));
    // printf("%d\n", ft_strncmp("Hello world", "Hello", 6));
    // printf("%d\n", strncmp("Hello world", "ello world", 11));
    // printf("%d\n", ft_strncmp("Hello world", "ello world", 11));
    // printf("%d\n", strncmp("Hello word", "Hello world", 3));
    // printf("%d\n", ft_strncmp("Hello word", "Hello world", 3));
 


    // char *str;
    // str = calloc(10, sizeof(char));
    // printf("calloc = [%s]\n", str);
    // char *str_1;
    // str_1 = ft_calloc(10, sizeof(char));
    // printf("ft_calloc = [%s]\n", str_1);

    // char *str_3;
    // str_3 = calloc(10, sizeof(int));
    // for (int i = 0; i < 10; i++) {
    //     str_3[i] = i;
    // }
    // for (int i = 0; i < 10; i++) {
    //     printf("%d, ", str_3[i]);
    // }
    // printf("\n");
    // char *str_4;
    // str_4 = ft_calloc(10, sizeof(int));
    // for (int i = 0; i < 10; i++) {
    //     str_4[i] = i;
    // }
    // for (int i = 0; i < 10; i++) {
    //     printf("%d, ", str_4[i]);
    // }
    // printf("\n");


    // char *res = strdup("Hello world");
    // printf("strdup = [%s]\n", res);
    // free(res);
    // char *res_2 = ft_strdup("Hello world");
    // printf("ft_strdup = [%s]\n", res_2);
    // free(res_2);
 
    // char *res_3 = strdup("");
    // printf("strdup = [%s]\n", res_3);
    // free(res_3);
    // char *res_4 = ft_strdup("");
    // printf("ft_strdup = [%s]\n", res_4);
    // free(res_4);
  
    // char *res_5 = strdup("H");
    // printf("strdup = [%s]\n", res_5);
    // free(res_5);
    // char *res_6 = ft_strdup("H");
    // printf("ft_strdup = [%s]\n", res_6);
    // free(res_6);
  
    // char *res_7 = strdup(NULL);
    // printf("strdup = [%s]\n", res_7);
    // free(res_7);
    // char *res_8 = ft_strdup(NULL);
    // printf("ft_strdup = [%s]\n", res_8);
    // free(res_8);



    // printf("ft_substr = [%s]\n", ft_substr("I am a software engineer", 5, 10));
    // printf("ft_substr = [%s]\n", ft_substr("I am a software engineer", 1, 3));
    // printf("ft_substr = [%s]\n", ft_substr("I am a software engineer", 0, 10));
    // printf("ft_substr = [%s]\n", ft_substr("I am a software engineer", 23, 10));
    // printf("ft_substr = [%s]\n", ft_substr("I am a software engineer", 10, 0));
	// char *str = "01234";
	// size_t size = 10;
	// char *ret = ft_substr(str, 10, size);

	// printf("ft_substr = [%s]\n", ret);


    // printf("ft_strjoin = [%s]\n", ft_strjoin("Hello ", "world"));
    // printf("ft_strjoin = [%s]\n", ft_strjoin("", "world"));
    // printf("ft_strjoin = [%s]\n", ft_strjoin("Hello ", ""));
    // printf("ft_strjoin = [%s]\n", ft_strjoin(" ", "world"));
    // printf("ft_strjoin = [%s]\n", ft_strjoin("", ""));
    
    
    
    // printf("ft_strtrim = [%s]\n", ft_strtrim("", "world"));
    printf("ft_strtrim = [%s]\n", ft_strtrim("          ", " "));
    // printf("ft_strtrim = [%s]\n", ft_strtrim("Hello world", "worlds"));
    // printf("ft_strtrim = [%s]\n", ft_strtrim("", "e"));
    // printf("ft_strtrim = [%s]\n", ft_strtrim("Hello ", "H"));
    // printf("ft_strtrim = [%s]\n", ft_strtrim(" String [[dsa d", " d"));
    // printf("ft_strtrim = [%s]\n", ft_strtrim("", ""));
	// char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	// char *s2 = "Hello \t  Please\n Trim me !";
	// char *ret = ft_strtrim(s1, " \n\t");
    // printf("ft_strtrim = [%s]\n", ret);
	// char *s1 = "  \t \t \n   \n\n\n\t";
	// char *s2 = "";
	// char *ret = ft_strtrim(s1, " \n\t");
    // printf("ft_strtrim = [%s]\n", ret);



    // char **arr = ft_split("I am a software engineer", ' ');
    // for (int i = 0; i < 9; i++) {
    //     printf("[%s]\n", arr[i]);
    // }   
	// char *string = "      split       this for   me  !       ";
	// // char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
	// char **arr = ft_split(string, ' ');
	// for (int i = 0; arr[i]; i++)
	// 	printf("split = [%s]\n", arr[i]);



    // printf("ft_itoa = %s\n", ft_itoa(50));
    // printf("ft_itoa = %s\n", ft_itoa(0));
    // printf("ft_itoa = %s\n", ft_itoa(-5));
    // printf("ft_itoa = %s\n", ft_itoa(52124214));
    // printf("ft_itoa = %s\n", ft_itoa(2147483647));
    // printf("ft_itoa = %s\n", ft_itoa(-2147483648));



	// ft_strmapi("ft_strmapi = [%s]\n", ft_strmapi("HeLLo World", ft_tolower));



	// printf("ft_atoi = %d\n", ft_atoi("4"));
	// printf("ft_atoi = %d\n", ft_atoi("-4141"));
	// printf("ft_atoi = %d\n", ft_atoi("-2147483648"));
	// printf("ft_atoi = %d\n", ft_atoi("2147483647"));
	// printf("ft_atoi = %d\n", ft_atoi("0"));
	// // printf("ft_atoi = %d\n", ft_atoi("  	10"));
	// printf("ft_atoi = %d\n", ft_atoi(" 124 20"));
	// char n[40] = "99999999999999999999999999";
	// int i1 = atoi(n);
	// int i2 = ft_atoi(n);
	// printf("ft_atoi = %d\n", i2);

    return 0;
}