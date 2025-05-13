#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string number = to_string(x);
        string reserve_number;
        int n = number.length();

        for (int i = n - 1; i >= 0; i--)
        {
            reserve_number += number[i];
        } 

        if (number == reserve_number)
        {
            return true;
        }

        else 
        {
            return false;
        }
    }
};

int main() {
    Solution solution;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (solution.isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
