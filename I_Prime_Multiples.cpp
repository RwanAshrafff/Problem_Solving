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
    int n,k; cin>>n>>k;
    vector<int> primes(k);
    for (auto &i:primes) cin>>i;
    vector<int> cnt(k+1);
    for (int i=1;i< (1<<k) ;i++){
        int devisors=0;
        int tmp=n;
        for (int j=0;j<k;j++){
            if ((1<<j) & i) devisors++,tmp/=primes[j];
        }
        cnt[devisors]+=tmp;
    }
    int ans=0;
    for (int i=1;i<=k;i++){
        if (i&1) ans+=cnt[i];
        else ans-=cnt[i];
    }
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}