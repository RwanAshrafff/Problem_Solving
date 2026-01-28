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
    ll n ; cin>>n;
    vector<int> v(n+1);
    for (int i=1;i<=n;i++) cin>>v[i];
    vector <ll>ans(n+1,1);
    for (int i=2;i<=n;i++){
        for (int j=1;j*j<=i;j++){
            if (i%j==0) {
                if(v[i]>v[j]) ans[i]=max(ans[i],ans[j]+1);
                if(v[i/j]<v[i]) ans[i]=max(ans[i],ans[i/j]+1);
            }

        }
    }
    cout<< * max_element(all(ans));
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
