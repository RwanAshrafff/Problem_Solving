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
const long long N = 2e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

vector<int>a,b;
int n,id,k;
int dp[N][3][2],vis[N][3][2];

int solve(int idx,int open,int alice){
    //base case
    if(idx>=n) return (open!=0?0:-1e18);
    
    int &ret=dp[idx][open][alice];
    if (vis[idx][open][alice]==id) return ret;
    vis[idx][open][alice]=id;

    ret=-1e18;
    if(open==0) 
    {
        ret=max(ret,solve(idx+1,0,alice));
        if(alice)
                ret=max(ret,solve(idx+1,1,0)+a[idx]+b[idx]);
        ret=max(ret,solve(idx+1,1,alice)+a[idx]);
    }
    else if (open==1) 
    {
        if (alice)
                ret=max(ret,solve(idx+1,1,0)+a[idx]+b[idx]);
        ret=max(ret,solve(idx+1,1,alice)+a[idx]);
        ret=max(ret,solve(idx+1,2,alice));
    }
    else 
    {
        ret=max(ret,solve(idx+1,2,alice));
    }
    return ret;
}

void run() {
    cin>>n>>k;
    a= vector<int>(n);
    b= vector<int>(n);
    for (auto &i:a) cin>>i;
    for (auto &i:b) cin>>i;
    id++;
    cout<<solve(0,0,k&1);
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
