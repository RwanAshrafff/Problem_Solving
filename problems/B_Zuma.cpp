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
const long long N = 5e3+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

vector<int>v;
int n,dp[N][N];

int solve(int l,int r){
    if(l>r) return 1;

    int &ret=dp[l][r];
    if(~ret) return ret;

    ret=1e18;
    for (int mid=l;mid<=r;mid++){
        if(v[l]==v[mid]){
        int rngl=solve(l+1,mid-1);
        int rngr=0;
        if (mid+1<=r)
            rngr=solve(mid+1,r);
        ret=min(ret,rngr+rngl);
        }
    }

    return ret;
}

void run() {
    cin>>n;
    memset(dp,-1,sizeof(dp));
    v=vector<int>(n);
    for(auto &i:v) cin>>i;
    cout<<solve(0,n-1);
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}