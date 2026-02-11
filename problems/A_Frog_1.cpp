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
const long long N = 1e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

vector<int>v;
int n,dp[N];

int solve(int idx)
{
    //base case 
    if (idx >= n-1)  return 0;

    int &ret=dp[idx];
    if (ret!=-1) return ret;
    ret=1e18;

    if ((idx+1)<n) ret=min(ret,solve(idx+1)+abs(v[idx]-v[idx+1]));
    if ((idx+2)<n) ret=min(ret,solve(idx+2)+abs(v[idx]-v[idx+2]));

    return ret;
}
void run() {
    memset(dp,-1,sizeof(dp));
    cin>>n;
    v= vector<int>(n);
    for(auto &i:v) cin>>i;
    cout<<solve(0);
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}