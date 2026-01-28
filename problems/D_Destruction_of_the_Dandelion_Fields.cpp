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
    int n,sum=0,flg=0; cin>>n;
    vector<int>odd;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        if (x%2!=0) odd.pb(x),flg=1;
        else sum+=x;
    }
    sort(rall(odd));
    int sz=odd.size();
    if (sz%2!=0) sz++;
    for (int i=0;i<sz/2;i++) sum+=odd[i];
    flg?cout<<sum:cout<<0;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}