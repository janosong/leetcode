#include <stdio.h>
#include <string.h>

int removeElement(int *nums, int numsSize, int val)
{
    if (0 == numsSize)
    {
        return 0;
    }
    int i = 0;
    for (int j ; j < numsSize; j++)
    {
        nums[i] = nums[j];
        if (val != nums[j])
            i++;
    }
    return i;
}

int main(int argc, char** argv)
{
    if (argc > 1)
        printf("argc:%d: %s\n",argc, argv[1]);
    return 0;

}
