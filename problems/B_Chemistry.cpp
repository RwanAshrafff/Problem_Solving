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
    string s ; cin>>s;
    map <char,int> mp;
    for (auto &i :s) mp[i]++;
    int ans=0;
    for (auto &[i,j]:mp){
        if (j&1) ans++;
    }
    (ans>k) && (ans-k>1) ?cout<<"NO":cout<<"YES";
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}