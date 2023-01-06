#include <bits/stdc++.h>
using namespace std;

int maxRotateFunction(vector<int> &nums)
{
    int n = nums.size();
    int sum = accumulate(begin(nums), end(nums), 0);

    int f = 0;
    for (int i = 0; i < n; i++)
    {
        f += i * nums[i];
    }
    int ans = f;
    for (int i = n - 1; i > 0; --i)
    {
        f += sum - nums.size() * nums[i];
        ans = max(f, ans);
    }

    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 2, 6};
    cout << maxRotateFunction(nums);

    return 0;
}
