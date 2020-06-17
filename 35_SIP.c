#include <stdio.h>
#include <string.h>

int searchInsert(int *nums, int numsSize, int target)
{
    if (NULL == nums)
        return 0;
    //int i = 0;
    //for (; i < numsSize; i++)
    //{
    //    if (target <= nums[i])
    //        break;
    //}

    int i = 0;
    int j = numsSize - 1;
    while (i <= j)
    {
        int mid = i + (j - i)/2;
        if (nums[mid] < target)
            i = mid + 1;
        else
            j = mid - 1;
    }
    return i;
};

int main(int argc, char** argv)
{
    if (argc > 1)
        printf("argc:%d: %s\n",argc, argv[1]);
    int a[] = {1,2,3,4,5};
    printf("%d\n", searchInsert(a, 5, 2));
    return 0;

}
