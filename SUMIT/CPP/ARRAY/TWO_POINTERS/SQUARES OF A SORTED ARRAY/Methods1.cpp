#include <bits/stdc++.h>
using namespace std;

void sortedSquares(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        nums[i] = nums[i] * nums[i];
    }
    sort(nums.begin(), nums.end());
}

int main()
{
    vector<int> nums = {-2, -4, -6, 8, 7, 5};
    sortedSquares(nums);
    for (int x : nums)
    {
        cout << x << " ";
    }
    return 0;
}