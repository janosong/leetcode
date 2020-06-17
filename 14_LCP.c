#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char * longestCommonPrefix(char ** strs, int strsSize)
//{
//    if (1 >= strsSize)
//        return *strs;
//    char map[26] = {0};
//    char *p = NULL;
//    int j = 0;
//    while (1)
//    {
//        char t = strs[0][j];
//        for (int i = 1; i < strsSize; i++)
//        {
//            if (t ^ strs[i][j])
//            {
//                goto done;
//            }
//        }
//        j++;
//    }
//done:
//    p = (char*)malloc(j+1);
//    memcpy(p, *strs, j);
//    return p;
//}

char * longestCommonPrefix(char ** strs, int strsSize)
{
    if (0 == strsSize)
    {
        return "";
    }
    int map[26] = {0};
    int n = 0;
    while (1)
    {
        int x = strs[0][n] - 'a';
        for (int i = 0; i < strsSize; i++)
        {
            if ('\0' == strs[i][n])
                goto done;
            map[strs[i][n] - 'a']++;
        }
        if (map[x] % strsSize)
        {
            break;
        }
        n++;
    }
    char *p = NULL;
done:
    p = malloc(n+1);
    memcpy(p, strs[0], n);
    return p;
}

int main(int argc, char** argv)
{
    if (argc > 1)
        printf("argc:%d: %s\n",argc, argv[1]);
    char *test[] = {"flower", "flow", "floight"};
    printf("%s\n", longestCommonPrefix(test, 3));
    char *test1[] = {"",""};
    printf("%s\n", longestCommonPrefix(test1, 2));
    char *test2[] = {};
    printf("%s\n", longestCommonPrefix(test2, 0));
    char *test3[] = {"","cbc", "c", "ca"};
    printf("%s\n", longestCommonPrefix(test3, 4));
    return 0;
}
