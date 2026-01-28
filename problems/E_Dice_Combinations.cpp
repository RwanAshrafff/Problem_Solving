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

int n ,dp[N];

int solve(int sum){
    //base case
    if (sum==n) return 1;            
    if (sum>n) return 0;            

    int &ret=dp[sum];
    if(~ret) return ret;

    ret=0;
    for (int j=1;j<=6;j++){
        ret=(ret + solve(sum+j))%mod;
    }
    return ret;
}
void run() {
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<solve(0);
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
