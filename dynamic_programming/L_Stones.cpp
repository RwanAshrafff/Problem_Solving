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

int n,k;
vector<int>v;
int dp[N];

int solve(int stones){
    if(stones<=0) return 0;
    
    int &ret=dp[stones];
    if(~ret) return ret;

   ret=0;
   for (auto &i:v){
    if(stones>=i){
        if(solve(stones-i)==0){
            ret=1;
            break;
        }
    }
   }
    return ret;
}

void run() {
    cin>>n>>k;

    v=vector<int>(n);
    memset(dp,-1,sizeof(dp));
    for(auto &i:v) cin>>i;
    int ans=solve(k);
    ans?cout<<"First":cout<<"Second";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
//states ->  stones,turn
//transition -> ya taro yal3b ,aw jaro 
