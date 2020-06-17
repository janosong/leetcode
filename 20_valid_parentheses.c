#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int what(char *p)
{
    switch (*p)
    {
        case '(':
            return 1;
        case ')':
            return -1;
        case '[':
            return 2;
        case ']':
            return -2;
        case '{':
            return 3;
        case '}':
            return -3;
        default:
            return 4;
    }
}

int isValid(char *s)
{
    if ('\0' == s[0]  )
        return 1;
    if ('\0' == s[1])
        return 0;
    int len = strlen(s);
    char *heap = malloc(len + 1);
    int i = 0;
    heap[0] = 4;
    while(*s)
    {
        i++;
        heap[i] = what(s);
        s++;
        if (0 == heap[i] + heap[i-1])
        {
            if (i>0)
                i-=2;
        }

    }
    if (0 != i)
    {
        return 0;
    }
    return 1;
}


int main(int argc, char** argv)
{
    if (argc > 1)
        printf("argc:%d: %s\n",argc, argv[1]);

    printf("1 %d\n", isValid("()[]{}"));
    printf("0 %d\n", isValid("[([]])"));
    printf("0 %d\n", isValid("([)]"));
    printf("0 %d\n", isValid("[)"));
    printf("1 %d\n", isValid("({})"));
    printf("1 %d\n", isValid(""));
    printf("0 %d\n", isValid("]"));
    printf("0 %d\n", isValid("(())]"));
    printf("0 %d\n", isValid("((]))]"));
    return 0;

}
