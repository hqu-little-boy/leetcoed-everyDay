//
// Created by zpf on 24-10-21.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        if(nums.size()<=1)
        {
            return 0;
        }
        else
        {
          const  auto& maxItem{*max_element(nums.begin(), nums.end())};
          const  auto& minItem{*min_element(nums.begin(), nums.end())};
        if(maxItem-minItem<=2*k)
        {
            return 0;
        }
            else
            {
                return maxItem-minItem-2*k;
            }
        }
    }
};
int main()
{

}