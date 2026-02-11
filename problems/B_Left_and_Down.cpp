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
const long long M = 2e5+5;
const long long mod = 1e9+7;

void run() {
    ll a,b,k; cin>>a>>b>>k;
    if (a<=k && b<=k)
    {
        cout<<1;
        return;   
    }
    ll g= gcd(a,b);
    ll ans = max ((a+k-1)/k, (b+k-1)/k);
    if (g>=ans ) cout<<1;
    else cout<<2; 
}

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
