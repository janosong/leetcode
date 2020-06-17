#include <stdio.h>
#include <string.h>

int removeDuplicates(int *nums, int numsSize)
{
    if (0 == numsSize)
    {   }
    int n = 1;
    int t = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (t != nums[i])
        {
            t = nums[i];
            nums[n] = t;
            n++;
        }

    }
    return n;
}

int main(int argc, char** argv)
{
    if (argc > 1)
        printf("argc:%d: %s\n",argc, argv[1]);
    int buf[] = {1,1,1,2,3,4,5,5,6,6,7,7,8,8,8,9,10,11};
    printf("%d\n", removeDuplicates(buf, 8));
    return 0;

}
