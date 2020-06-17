#include <stdio.h>
#include <string.h>

int strStr(char *haystack, char *needle)
{
    if (NULL == haystack || NULL == needle)
        return -1;
    if ('\0' == *needle)
        return 0;
    int i = 0;
    int j = 0;
    for (; '\0' != haystack[i]; i++)
    {
        if (haystack[i] == *needle)
        {
            j = 0;
            for (; '\0' != needle[j]; j++)
            {
                if (haystack[i+j] == '\0' || haystack[i+j] != needle[j])
                {
                    break;
                }
            }
            if ('\0' == needle[j])
            {
                return i;
            }
        }
    }
    return -1;
}

int main(int argc, char** argv)
{
    if (argc > 1)
        printf("argc:%d: %s\n",argc, argv[1]);
    printf("2 %d\n", strStr("hello", "ll"));
    printf("-1 %d\n", strStr("aaaa", "bl"));
    printf("-1 %d\n", strStr("", "bl"));
    printf("0 %d\n", strStr("aaaa", ""));
    printf("0 %d\n", strStr("", ""));
    printf("-1 %d\n", strStr("aaa", "aaaa"));
    return 0;
}
