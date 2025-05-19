#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    char *string = strstr(haystack, needle);

    if (string != NULL)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
