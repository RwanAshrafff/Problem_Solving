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
const long long N = 2e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

void run() {
    int n,l,r,x; cin>>n>>l>>r>>x;
    vector<int>v(n);
    for (auto &i:v) cin>>i;
    int cnt=0;
    for (int i=0;i< (1<<n);i++){
        int sum=0,hard=-1, easy=INT_MAX,c=0;
        for(int j=0;j<n;j++){
            if (i&(1<<j)){
                sum+=v[j];
                hard=max(hard,v[j]);
                easy=min(easy,v[j]);
                c++;
            }
        }
        if (sum>=l && sum<=r && (hard-easy)>=x && c>=2) cnt++;
    }
    cout<<cnt;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}