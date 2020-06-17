#include <stdio.h>

void reverseString(char* s, int sSize){
    if (NULL == s) {
        return;

    }
    if (sSize <= 0)
        return;
    char *p = s;

    int i = 0;
    int j = sSize - 1;
    while (i < j) {
        char tmp = p[i];
        p[i] = p[j];
        p[j] = tmp;
        i++;
        j--;


    }
    return;

}

char * reverseWords(char * s){
    int size = -1;
    char *p = s;
    char *head = p;
    int i = -1;
    do {
        i++;
        size++;
        if (' ' == p[i] || '\0' == p[i]) {
            reverseString(head, size);
            size = -1;
            head = &p[i + 1];

        }

    } while ('\0' != p[i]);
    return p;

}


int main()
{
    char buf[50] = "Let's take LeetCode contest";
    printf("%s\n", reverseWords(buf));
    return 0;
}
