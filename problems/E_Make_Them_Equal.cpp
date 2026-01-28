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
const long long N = 3e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

void run() {
    ll n; cin>>n;
    char c ; cin>>c;
    string s; cin>>s;
    string s2=" ";
    s2+=s;
    set<ll>idx;
    for (int i=1;i<=n;i++) if (s2[i]!=c)  idx.insert(i);

    if (idx.empty()){
        cout<<0;
        return;
    }

    for (int i=2;i<=n;i++){
        bool ok =1;
        for(int j=i;j<=n;j+=i)
        {
            if (s2[j]!=c && idx.find(j)!=idx.end() ) {
                ok=0;
                break;
            }
        }
        if (ok){
            cout<<1<<el<<i;
            return;
        }
    }
    cout<<2<<el<<n-1<<" "<<n;
}

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
