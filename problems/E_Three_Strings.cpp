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
const long long N = 1e3+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

string a,b,c;
int n,m;
int dp[N][N];

int solve(int idx1,int idx2)
{
    if (idx1==n && idx2==m) return 0;
    
    int &ret=dp[idx1][idx2];
    if(~ret) return ret;
    
    ret=1e18;
    if (idx1<n)  ret=min(ret,solve(idx1+1,idx2)+(a[idx1]!=c[idx1+idx2]));
    if(idx2<m)   ret=min(ret,solve(idx1,idx2+1)+(b[idx2]!=c[idx1+idx2]));

    return ret;
}
void run() {
    memset(dp,-1,sizeof(dp));
    cin>>a>>b>>c;
    n = a.size(),m= b.size();
    cout<<solve(0,0);
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
