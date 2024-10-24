//
// Created by zpf on 24-10-15.
//
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int duplicateNumbersXOR(vector<int>& nums)
    {
        auto res{0};
        for (const auto& num : nums)
        {
            res ^= num;
        }
        const set set1(nums.begin(), nums.end());
        for (const auto& num : set1)
        {
            res ^= num;
        }
        return res;
    }
};

int main()
{
    Solution    solution;
    vector<int> nums{1, 2, 1, 3};
    cout << solution.duplicateNumbersXOR(nums) << endl;
    return 0;
}