#include <stdio.h>
#include <string.h>

bool isValid(char* s) {
    char stack[strlen(s) + 1];
    int top = -1;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stack[++top] = s[i];
        }

        else if (s[i] == ')' || s[i] == '}' || s[i] == ']') 
        { 
            if (top == -1) return false; 

            if ((s[i] == ')' && stack[top] == '(') ||
                (s[i] == '}' && stack[top] == '{') ||
                (s[i] == ']' && stack[top] == '['))
                {
                    top--;
                }
            else
            {
                return false;
            }
        }
    }

    return top == -1;
}
