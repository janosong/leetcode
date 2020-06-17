#include <stdio.h>
#include <string.h>

int g_val[26] = {0};
int romanToInt(char *s)
{
    int len = strlen(s);
    int val = g_val[s[len - 1] - 'A'];

    for (int i = len - 2; i >= 0; i--)
    {
        if (g_val[s[i]-'A'] < g_val[s[i+1] - 'A'])
            val -= g_val[s[i] - 'A'];
        else
            val += g_val[s[i] - 'A'];
    }
    return val;
}

int main(int argc, char** argv)
{
    if (argc > 1)
        printf("argc:%d: %s\n",argc, argv[1]);
    g_val['I'-'A'] = 1;
    g_val['V'-'A'] = 5;
    g_val['X'-'A'] = 10;
    g_val['L'-'A'] = 50;
    g_val['C'-'A'] = 100;
    g_val['D'-'A'] = 500;
    g_val['M'-'A'] = 1000;
    printf("%d\n", romanToInt(argv[1]));
    return 0;

}
