#include <bits/stdc++.h>
using namespace std;
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define el "\n"
#define ll long long
//#define int long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
const long long N = 2e5+5;
const long long mod = 998244353;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

void run() {
    int n ; cin>>n;
    vector <ll>a(n),b(n); 
    for (ll i=0;i<n;i++) cin>>a[i],a[i]*= (i+1) * (n-i);
    for (auto &i:b) cin>>i;
    sort (all(a));
    sort(rall(b));
    ll ans=0;
    for (ll i=0;i<n;i++){
        a[i]%=mod;
        ans=(ans+(a[i]*b[i]))%mod;
    }
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}