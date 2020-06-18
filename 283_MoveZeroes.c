/*Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations.
*/

#include <stdio.h>

void moveZeroes(int* nums, int numsSize){
    int cnt = 0;
    int i = 0;
    if (NULL == nums) {
        return;
    }
   // while (i < (numsSize - cnt)) {
   //     nums[i] = nums[i + cnt];
   //     if (0 == nums[i]) {
   //         cnt++;
   //     } else {
   //         i++;
   //     }
   // }
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[cnt++] = nums[i];
        }
    }

    for (int j = i; j < numsSize; j++) {
        nums[j] = 0;
    }
}
int main()
{
#define size 1
    //int a[5] = {0,1,0,3,12};
    int a[1] = {0};
    moveZeroes(a, size);
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
