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

string s,t;
int dp[N][N];
int ssz,tsz;

int solve(int idx1,int idx2){
    //base case
    if(idx1==ssz) return tsz-idx2;
    if(idx2==tsz)  return ssz-idx1;

    int &ret=dp[idx1][idx2];
    if(~ret) return ret;

    if(s[idx1]==t[idx2]) ret=solve(idx1+1,idx2+1);
    else {
        int op1=0,op2=0,op3=0;
        //delete
        op1=solve(idx1+1,idx2)+1;
        //add
        op2=solve(idx1,idx2+1)+1;
        //replace
        op3=solve(idx1+1,idx2+1)+1;

        ret=min({op1,op2,op3});
    }
    return ret;

}

void run() {
    cin>>s>>t;
    ssz=s.size();
    tsz=t.size();
    memset(dp,-1,sizeof(dp));
    cout<<solve(0, 0);
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
