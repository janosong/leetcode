#include <stdio.h>

int lengthOfLastWord(char * s){
    int cnt = 0;
    int last = 0;
    while (*s) {
        if (' ' == *s) {
            last = cnt ? cnt : last;
            cnt = 0;

        } else {
            cnt++;

        }
        s++;

    }
    if (!cnt)
        return last;
    return cnt;

}

int main()
{
    int len = 0;
    len = lengthOfLastWord("is a nice day");
    printf("len:%d\n", len);
    return 0;
}
