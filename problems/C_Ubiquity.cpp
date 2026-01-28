#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define ll long long
#define int long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
using namespace std;
const long long M = 2e5+5;
const long long mod = 1e9+7;

ll fastpower(ll n ,ll m)
{
    ll ret=1;
    while(m)
    {
        if(m&1)
            (ret*=n)%=mod;
        (n*=n) %=mod;
        m/=2;
    }
    return ret;
}
void run() {
    int n ; cin>>n;
    int ans = fastpower(10,n);
    ans=(ans%mod -fastpower(9,n)+mod)%mod ;
    ans= (ans%mod -fastpower(9,n)+mod)%mod;
    ans=(ans%mod + fastpower(8,n))%mod;
    cout <<ans;
    }

signed main() {
    ROU
    int tc = 1;
   // cin >> tc;
    while (tc--) run(), cout << el;
}
