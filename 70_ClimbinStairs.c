#include <stdio.h>
#include <stdlib.h>

#if 0
int climbStairs(int n){
    if (n < 3)
        return 2;
    int *sum = malloc(n*sizeof(int));
    sum[0] = 1;
    sum[1] = 2;
    for (int i = 2; i < n; i++) {
        sum[i] = sum[i - 1] + sum[i - 2] ;

    }
    return sum[n-1];

}
#endif

int climbStairs(int n){
    if (n < 3)
        return 2;
    int *sum = malloc((n+1)*sizeof(int));
    sum[0] = 0;
    sum[1] = 1;
    sum[2] = 2;
    for (int i = 3; i <= n; i++) {
        sum[i] = sum[i - 1] + sum[i - 2] ;

    }
    return sum[n];

}
int main()
{
    int cnt = climbStairs(6);
    printf("cnt:%d\n", cnt);
    return 0;
}
