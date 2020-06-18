/*
Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements of [1, n] inclusive that do not appear in this array.

Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

Example:

Input:
[4,3,2,7,8,2,3,1]

Output:
[5,6]
*/

#include <stdio.h>
#include <stdlib.h>
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
    int same_cnt = 0;
    for (int i = 0; i < numsSize; i++) {
        int cnt = i + 1;
        int tmp = 0;

        while (nums[i] != cnt) {
            tmp = nums[nums[i] - 1];
            if (tmp == nums[i]) {
                break;
            }
            nums[nums[i] - 1] = nums[i];
            nums[i] = tmp;
        }
    }
    (*returnSize) = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != i+1) {
            (*returnSize)++;
        }
    }
    int *r_nums = malloc(sizeof(int) * (*returnSize));
    int j = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != i+1) {
            r_nums[j] = i+1;
            j++;
        }
    }
    return r_nums;
}

int main()
{
    int nums[8] = {4,3,2,7,8,2,3,1};
    int size = 0;
    int *r_nums = findDisappearedNumbers(nums, 8, &size);
    for (int i = 0; i < size; i++) {
        printf("%d ", r_nums[i]);
    }
    printf("\n");
    free(r_nums);
    return 0;
}
