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
    int n; cin>>n;
    vector<int> v(n*2);
    map<int,int>mp;
    for (int i=0 ; i<2*n ; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int even=0,odd=0;
    for (auto &[i,j]:mp) {
        (j&1) ? odd++ : even++;
    }
    int ans = odd + 2 * even;
    if (odd==0 && (even%2)!=n%2) ans-=2;
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}