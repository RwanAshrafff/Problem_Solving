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
const long long N = 3e3+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
int n,sum;
int dp[N][N][2];
vector<int>v;

int solve(int start, int end,int turn){
    if(start>end) return 0;

    int &ret=dp[start][end][turn];
    if(ret!=-1e18) return ret;

    if(turn==0){
        ret=-1e18;
        ret=max(ret,solve(start+1,end,1)+v[start]);
        ret=max(ret,solve(start,end-1,1)+v[end]);
    }
    else{
        ret=1e18;
        ret=min(ret,solve(start+1,end,0));
        ret=min(ret,solve(start,end-1,0));
    }
    return ret;
}

void run() {
    cin>>n;

    v=vector<int>(n);
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            for(int k=0;k<2;k++){
                dp[i][j][k]=-1e18;
        }}}

    for(auto &i:v) cin>>i,sum+=i;

    int x=solve(0,n-1,0);
    int y=sum-x;
    cout<<x-y;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}