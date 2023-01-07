// 6287. Categorize Box According to Criteria 
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
#define lli long long int

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky = false, heavy = false, both = false, neither = false;
        if(length >= 10000 || width >= 10000 || height >= 10000 || (long long)length*width*height >= 1000000000) bulky = true;
        if(mass >= 100) heavy = true;
        if(bulky && heavy) return "Both";
        if(!bulky && !heavy) return "Neither";
        if(bulky && !heavy) return "Bulky";
        return "Heavy";
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
