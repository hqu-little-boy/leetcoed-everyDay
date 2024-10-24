//
// Created by zpf on 24-10-23.
//
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long countCompleteDayPairs(vector<int>& hours)
    {
        auto          res{0ll};
        map<int, int> hoursMap;
        for (auto& item : hours)
        {
            hoursMap[item % 24]++;
        }
        for (const auto& [num,size] : hoursMap)
        {
            if (num == 0 || num == 12)
            {
                res += size * (size - 1);
            }

            else if (hoursMap[24 - num] > 0)
            {
                res += size * hoursMap[24 - num];
            }
        }
        return res / 2;
    }
};

int main()
{
    vector   nums{12, 12, 30, 24, 24};
    Solution solution;
    cout << solution.countCompleteDayPairs(nums) << endl;
    return 0;
}