// 6290. Maximize the Minimum Powered City 
// It's a hard question -> approach: binary search
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
#define lli long long int

class Solution {
public:
    long long maxPower(vector<int>& stations, int r, int k) {
        int n = stations.size(), i, u, v;
        long long s, x, L = 0, R = 1000000000000LL, mid;
        vector<int> a;
        while(L+1 < R) {
            a=stations;
            mid=L+R>>1;
            x=k;
            for(i=u=v=s=0; i<n; i++) {
                for(; v<n&&v<=i+r; v++) s += a[v];
                if(u==i-r-1) s -= a[u++];
                if(s<=mid) {
                    a[v-1] += mid-s;
                    x -= mid-s;
                    s = mid;
                }
            }
            if(x >= 0) L=mid;
            else  R=mid;
        }
        return L;
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
