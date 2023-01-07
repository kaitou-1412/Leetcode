// 6289. Find Xor-Beauty of Array 
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
#define lli long long int

class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        for(int i=0; i<n; i++) res ^= nums[i];
        return res;
    }
};

int main()
{
    fastio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for(int i=0; i<n; i++) cin >> a[i];
        
        cout << "\n";
    }
    return 0;
}
