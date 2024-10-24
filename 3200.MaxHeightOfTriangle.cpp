//
// Created by zpf on 24-10-15.
//
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxHeightOfTriangle(int red, int blue)
    {
        auto h1{0};
        auto isRed{false};
        const auto redBak = red;
        const auto blueBak = blue;
        for (auto i{1};; i++)
        {
            if (isRed)
            {
                if (red >= i)
                {
                    red -= i;
                    h1++;
                    isRed = !isRed;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (blue >= i)
                {
                    blue -= i;
                    h1++;
                    isRed = !isRed;
                }
                else
                {
                    break;
                }
            }
        }

        red = redBak;
        blue = blueBak;
        auto h2{0};
        isRed = true;
        for (auto i{1};; i++)
        {
            if (isRed)
            {
                if (red >= i)
                {
                    red -= i;
                    h2++;
                    isRed = !isRed;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (blue >= i)
                {
                    blue -= i;
                    h2++;
                    isRed = !isRed;
                }
                else
                {
                    break;
                }
            }
        }
        return max(h1, h2);
    }
};

int main()
{
    Solution solution;
    cout << solution.maxHeightOfTriangle(4, 9) << endl;
    return 0;
}