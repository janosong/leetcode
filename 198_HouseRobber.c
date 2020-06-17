
static int g_sum[400] = {0};
int rob(int* nums, int numsSize){
    if (0 == numsSize) {
        return 0;

    } else if (1 == numsSize) {
        return nums[0];

    } else if (2 == numsSize) {
        return (nums[0] > nums[1]) ? nums[0] : nums[1];

    }

    int i = 2;
    g_sum[0] = nums[0];
    g_sum[1] = (nums[0] > nums[1]) ? nums[0] : nums[1];
    while (i < numsSize) {
        int tmp = g_sum[i - 2] + nums[i];
        if (tmp > g_sum[i - 1]) {
            g_sum[i] = tmp;

        } else {
            g_sum[i] = g_sum[i - 1];

        }
        i++;

    }
    return g_sum[numsSize - 1];

}
