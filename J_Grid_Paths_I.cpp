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

int n,dp[N][N];
char arr[N][N];

int solve(int i,int j){

    if(i>=n || j>=n) return 0;
    if (arr[i][j]=='*') return 0; 
    if( i==(n-1) && j==(n-1) ) return 1;

    int &ret=dp[i][j];
    if(~ret) return ret;

    ret=(solve(i,j+1)+solve(i+1,j))%mod;

    return ret;
}

void run() {
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<solve(0,0);
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
//Transition -> Right (i,j+1) / Down (i+1,j)
//States -> i,j