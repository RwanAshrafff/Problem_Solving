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
    int n ; cin>>n;
    vector<int>v1,v2,v3;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        if (x==0) v3.pb(x);
        else if (x>0) v2.pb(x);
        else v1.pb(x);
    }
    if (v2.empty()){
        v2.pb(v1.back());
        v1.pop_back();
        v2.pb(v1.back());
        v1.pop_back();
    }
    if (v1.size()%2==0){
        v3.pb(v1.back());
        v1.pop_back();
    }
    int szv1=v1.size();
    int szv2=v2.size();
    int szv3=v3.size();
    cout<<szv1<<" ";
    for (auto &i:v1) cout<<i<<" ";
    cout<<el;
    cout<<szv2<<" ";
    for (auto &i:v2) cout<<i<<" ";
    cout<<el;
    cout<<szv3<<" ";
    for (auto &i:v3) cout<<i<<" ";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}