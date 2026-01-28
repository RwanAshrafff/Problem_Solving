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

ll good(ll num)
{
    vector <int> v ={2,3,5,7};
    ll ans=num;
    for (int i=1;i<16;i++) // 16 means 2 power 4 -1 1<<4
    {
        ll lcm=1; 
        ll x = popcnt(i);
        for (int j=0;j<4;j++){
            if (i & (1 << j))  lcm *= v[j];
        }
            ll l = num/lcm;
            x%2==1?ans-=l:ans+=l;   
    }
    return ans;
}

void run() {
    ll l,r ; cin >> l >> r;
    cout<<good(r)-good(l-1);
    }

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
