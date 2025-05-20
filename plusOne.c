/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdio.h>
 #include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        digits[i]++;
        if (digits[i] < 10)
        {
            *returnSize = digitsSize;
            return digits;
        }
        else
        {
            digits[i] = 0;
            *returnSize = digitsSize + 1;
        }
    }
    int *array = malloc(sizeof(int) * (digitsSize + 1));

    array[0] = 1;
    for (int i = 1; i < digitsSize + 1; i++)
    {
        array[i] = 0;
    }
    return array;
}
