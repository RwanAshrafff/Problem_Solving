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
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

void run() {
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n);
    vector<ll> pre(n);
    for (auto &x:v) cin>>x;
    pre[0] = v[0];
    for (ll i=1;i<n;i++) pre[i] = pre[i-1] ^ v[i];
    while (q--) {
        ll l,r;
        cin>>l>>r;
        l--,r--;
        if (l > 0) cout<< (pre[r] ^ pre[l-1]) <<el;
        else cout<<pre[r]<<el;
    }

}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
