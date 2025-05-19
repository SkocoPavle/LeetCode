#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int k;
    if (target == nums[0] || target < nums[0])
    {
        return 0;
    }

    if (target > nums[0] && numsSize == 1)
    {
        return 1;
    }

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] == target)
        {
            k = i;
            break;
        }

        else if (target < nums[i] && target > nums[i - 1])
        {
            k = i;
            break;
        }

        else
        {
            k = i + 1;
        }
    }
    return k;
}
