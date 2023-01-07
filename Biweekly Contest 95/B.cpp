// 6288. Find Consecutive Integers from a Data Stream 
#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
#define lli long long int

class DataStream {
public:
    int value, k, res;
    DataStream(int value, int k) {
        this->value = value;
        this->k = k;
        this->res = 0;
    }
    
    bool consec(int num) {
        if(num == this->value) {
            if(this->res < this->k) this->res += 1;
        }
        else this->res = 0;
        return this->res == this->k;
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
