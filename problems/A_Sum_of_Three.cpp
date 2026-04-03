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

void run() {
    int n; cin>>n;
   if (n<=6 || n==9) cout<<"NO";
   else if (n%3==1) cout<<"YES"<<el<<1 <<" "<<2<<" "<<n-3;
   else if(n==12) cout<<"YES"<<el<<1<<" "<<4<<" "<<7;
   else cout<<"YES"<<el<<2<<" "<<5<<" "<<n-7;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}