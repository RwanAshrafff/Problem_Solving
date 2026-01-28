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
    int n,m; ;cin>>n>>m;
    vector <int> v(n);
    for (auto &i:v) cin>>i;
    int x; cin>>x;
    v[0] = min(v[0],x-v[0]);
    for (int i=1;i<n;i++){
        if ( (x-v[i]>=v[i-1] && x-v[i]<v[i]) || (v[i-1]>v[i] && x-v[i]>=v[i-1]))    v[i]=x-v[i];
    }
    is_sorted(all(v))?cout<<"YES":cout<<"NO";
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}