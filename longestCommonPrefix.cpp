#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
     char *string;
     int min = strlen(strs[0]);
     for (int i = 0; i < (strsSize); i ++)
     {
        if (strlen(strs[i]) < min)
        {
            min = strlen(strs[i]);
        }
     }
     string = malloc(min + 1);
     int number = 0;
     int mismatch = 0;
     for (int i = 0; i < min; i++)
     {
        for (int j = 1; j < strsSize; j++)
        {
            if (strs[0][i] != strs[j][i])
            {
                mismatch = 1;
                break;
            }
        }
        if (mismatch) break;
        string[number] = strs[0][i];
        number++;
     }

     string[number] = '\0';

     if (strlen(string) == 0)
     {
        return "";
     }
     else
     {
        return string;
     }
}
