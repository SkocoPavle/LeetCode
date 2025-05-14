#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int number = 0;

        unordered_map<char, int> value = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n && value[s[i]] < value[s[i + 1]])
            {
                number -= value[s[i]];
            }
            else
            {
                number += value[s[i]];
            }
        }
        return number;
    }
};

