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
    int a,b; cin>>a>>b;
    if (a==b) cout<<0;
    else if (__bit_width(b) > __bit_width(a)) cout << -1;
    else {
        vector<int>v;
        for (int i=0;i<=30;i++){
            int bit= (1LL<<i);
            if ((bit&a) != (bit&b)) v.pb(bit);
        }
        cout<<v.size()<<el;
        for (auto &i:v) cout<<i<<" ";
    }
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}