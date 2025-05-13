#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         for (int i = 0; i < nums.size(); i++)
         {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j) continue;

                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
         }
        return {};
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);

    cout << "Indexes: " << result[0] << " and " << result[1] << endl;
    return 0;
}
