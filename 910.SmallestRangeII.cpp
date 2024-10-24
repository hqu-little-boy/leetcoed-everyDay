//
// Created by zpf on 24-10-21.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        ranges::sort(nums);
        int ans = nums.back() - nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int mx = max(nums[i - 1] + k, nums.back() - k);
            int mn = min(nums[0] + k, nums[i] - k);
            ans = min(ans, mx - mn);
        }
        return ans;
    }
};

int main()
{

}