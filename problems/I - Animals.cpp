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
const int dx8[] = {1, 0, -1, 0,1,-1,1,-1};
const int dy8[] = {0, 1, 0, -1,1,-1,-1,1};

void run() {
    int n,tons; cin>>n>>tons;
    vector<int>v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i];
        v[i]*=(n-i);
    }
    int ans=0;
    sort(all(v));
    for (int i=0;i<n;i++){
        if (v[i]<=tons ) ans++,tons-=v[i];
    }
    cout<<ans;
}

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}