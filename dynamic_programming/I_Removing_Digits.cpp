#include <bits/stdc++.h>
using namespace std;
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define el "\n"
#define ll long long
#define int long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
const long long N = 1e6+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

int n, dp[N];

int solve(int num){
    //base case
    if (num==0) return 0;

    int &ret=dp[num];
    if(~ret) return ret;
    
    ret=INT_MAX;
    int temp=num;
    while(temp>0){
        int x = temp%10;
        ret=min(ret,solve(num-x)+1);
        temp/=10;
    }

    return ret;
}
void run() {
    memset(dp, -1, sizeof(dp));
    cin>>n;
    cout<<solve(n);
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
