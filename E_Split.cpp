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
    int n,k;cin>>n>>k;
    map<int,int>mp;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    for (auto i:mp){
        if (i.second % k!=0){
            cout<<0;
            return;
        }
        mp[i.first]/=k;
    }
    ll ans=0,r=0;
    map<int,int>mp2;
    for (int l=0;l<n;l++){
        while(r<n && mp2[v[r]]+1<=mp[v[r]]){
            mp2[v[r]]++;
            r++;
        }
        ans+=(r-l);
        mp2[v[l]]--;
    }
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}