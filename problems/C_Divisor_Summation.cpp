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
    ll n ;cin>>n;
    ll sum=0;
    for (int i=1; (i*i) <=n;i++)
    {
        if (n%i==0) {
            sum+=i;
            if ((i*i)!=n)   sum+=(n/i);
        }
    }
    cout<<sum-n;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}