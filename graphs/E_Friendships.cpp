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
    int n,k;cin>>n>>k;
    if (k>((n-2)*(n-1))/2) {
        cout<<-1;
        return;
    }
    int max=((n-2)*(n-1))/2;
    vector<pair<int,int>>ans;
    for (int i=2;i<=n;i++){
        ans.push_back({1,i});
    }
    for (int i=2;i<=n;i++){
        for (int j=i+1;j<=n;j++){
            if (max==k) {
                break;
            }
            ans.pb({i,j});
            max--;
        }
    }
    cout<<ans.size()<<el;
    for (auto &i:ans) cout<<i.first<<" "<<i.second<<el;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}