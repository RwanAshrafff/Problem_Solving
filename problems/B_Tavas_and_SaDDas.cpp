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
ll x,ans ;
void lucky(ll n=0,int idx=0){
    //base case
    if (n>x) {return;}
    if (n==x) {
        ans=idx;
        return;
    } 
    //transition
    lucky(n*10+4,2*idx+1);
    lucky(n*10+7,2*idx+2);
}

void run() {
    cin>>x;
    lucky();
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}