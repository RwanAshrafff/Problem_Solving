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
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m),ans;
    for (auto &i:a) cin>>i;
    for (auto &i:b) cin>>i;
    sort(all(a));
    for (int i=0;i<m;i++){
        int l=0,r=n-1,cnt=0;
        while(l<=r){
            int mid=(l+r)/2;
            if (b[i]>=a[mid]) {
                cnt+=(mid-l+1);
                l=mid+1;
            }
            else    r=mid-1;
        }
        ans.pb(cnt);
}
for (auto &i:ans) cout<<i<<" ";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}