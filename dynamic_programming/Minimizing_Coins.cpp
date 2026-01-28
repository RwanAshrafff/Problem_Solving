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

int n,x;
int dp[N];
vector <int>v;

int solve(int x)
{
    //base case
    if (x==0) return 0;
    if(x<0) return 1e18;

    int &ret=dp[x];
    if(~ret) return ret;

    ret=1e18;
    for(int i=0;i<n;i++) ret=min(ret,solve(x-v[i])+1);
    return ret;
}
void run() {
    memset(dp,-1,sizeof(dp));
    cin>>n>>x;
    v=vector<int>(n);
    for (auto &i:v) cin>>i;
    int ans=solve(x);
    ans>=1e18?cout<<-1:cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
