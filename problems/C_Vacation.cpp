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

vector<int>a(N),b(N),c(N);
int dp[N][4];  
int n;
int solve(int row,int col)
{
    if (row==n) return 0;

    int &ret =dp[row][col];
    if(~ret) return ret;

    int op1=0,op2=0,op3=0;
    if (col!=1) op1=solve(row+1,1)+a[row];
    if(col!=2)  op2=solve(row+1,2)+b[row];
    if(col!=3)  op3=solve(row+1,3)+c[row];

    ret=max({op1,op2,op3});
    return ret;
}
void run() {
    memset(dp,-1,sizeof(dp));
    cin>>n;

    for (int i=0;i<n;i++) cin>>a[i]>>b[i]>>c[i];
    cout<<solve(0,0);
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}