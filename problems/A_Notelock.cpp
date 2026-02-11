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
    k--;
    string s ; cin>>s;
    int ans=0,flg=0;
    for (int i=0;i<n;i++){
        if (!flg && s[i]=='1') flg=1,ans++;
        else if (flg && s[i]=='1'){
            bool flg2=0;
            for (int j=i-k;j<i;j++){
                if (s[j]=='1') flg2=1;
            }
            if (flg2==0) ans++;
        }
    }
    cout<<ans;
}

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}