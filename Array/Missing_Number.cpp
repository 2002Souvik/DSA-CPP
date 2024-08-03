#include <bits/stdc++.h>
using namespace std;

int sortingMethod(int nums[], int n)
{
    ////T.C: O(nlogn) S.C: O(1)
    // sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i == nums[i])
        {
            continue;
        }
        else
        {
            return i;
        }
    }
    return n;
}

int xorMethod(int nums[], int n)
{
    ////T.C: O(nlogn) S.C: O(1)
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= nums[i];
    }

    for (int i = 0; i <= n; i++)
    {
        ans ^= i;
    }
    return ans;
}

int main()
{ 
    int nums[5] = {1, 2, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    sort(nums, nums+n);
    cout << xorMethod(nums, n)<<endl;
    cout << sortingMethod(nums, n);
    return 0;
}