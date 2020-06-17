#include <stdio.h>

int singleNumber(int* nums, int numsSize){
#if 0
    int ret = 0;
    for (int i = 0; i < numsSize; i++) {
        ret = ret ^ nums[i];

    }

    return ret;
#endif
    int tmp = 0;
    for (int i = 0; i < numsSize; i++) {
        tmp = nums[i];
        for (int j = i + 1; j < numsSize; j++) {
            if (tmp == nums[j]) {
                break;
            }

        }
    }
    return tmp;

}

int main()
{
    int buf[3] = {2,2,1};
    printf("%d\n", singleNumber(buf, 3));
}
