#include <stdio.h>
#include <ctype.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    int n = strlen(s);
    int k = 0;
    int mismatch = 0;

    for (int i = 0; i < n; i++)
    {
        if (isspace(s[i]))
        {
            if (i + 1 == n)
            {
                break;
            }
            
           for (int j = i + 1; j < n; j++)
           {
            if (isalpha(s[j]))
            {
                mismatch = 0;
                break;
            }

            else
            {
                mismatch = 1;
            }
           } 
            if (mismatch == 0)
            {
                k = 0;
            }
            else
            {
                return k;
            }
        }

        else
        {
            k++;
        }
    }
    return k;
}
