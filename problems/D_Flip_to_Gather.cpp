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

int n,id;
string s;
int dp[N][3],vis[N][3];

int solve(int idx,int open){
    //base case
    if(idx==n) return 0;
    
    int &ret=dp[idx][open];
    if (vis[idx][open]==id) return ret;
    vis[idx][open]=id;

    ret=1e9;
    if(open==0) //mfish hga mftoha
    {
        ret=min(ret,solve(idx+1,0)+(s[idx]=='1'));
        ret=min(ret,solve(idx+1,1)+(s[idx]=='0'));
    }
    else if (open==1) // ana gwa 
    {
        ret=min(ret,solve(idx+1,1)+(s[idx]=='0'));
        ret=min(ret,solve(idx+1,2)+(s[idx]=='1'));
    }
    else //close
    {
        ret=min(ret,solve(idx+1,2)+(s[idx]=='1'));
    }
    return ret;
}

void run() {
    cin>>n;
    cin>>s;
    id++;
    cout<<solve(0,0);
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}