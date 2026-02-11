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
    int n ; cin>>n;
    set<int>s;
    int zeros=1;
    // n = x + (x*10^k)
    // n= x+(1+10^k)
    for(int i=1;i<=18;i++){
        zeros*=10;
        int x=n/(1+zeros);
        if(n%(1+zeros)==0) {
            s.insert(x);
        }
    }
    if(s.empty()) cout<<0;
    else{
        cout<<s.size()<<el;
        for(auto &i:s) cout<<i<<" ";
    }
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}