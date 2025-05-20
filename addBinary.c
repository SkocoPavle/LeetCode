#include <stdio.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int len_a = strlen(a);
    int len_b = strlen(b);
    int max_length = (len_a > len_b) ? len_a : len_b;
    char *result = malloc(sizeof(char) * (max_length + 2));
    int k = 0;
    int curry = 0;

    while(i >= 0 || j >= 0 || curry)
    {
        int sum = curry;
        if (i >= 0) sum += (a[i--] - '0');
        if (j >= 0) sum += (b[j--] - '0');
        result[k++] = (sum % 2) + '0';
        curry = sum / 2;
    } 

    result[k] = '\0';
    int n = strlen(result);
    int middle = n / 2;
    char temp;

    for (int i = 0; i < middle; i++)
    {
        temp = result[i];
        result[i] = result[n - i - 1];
        result[n - i - 1] = temp;
    }

    return result;
}
