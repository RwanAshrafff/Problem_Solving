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
    set<int>s1,s2;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        s1.insert(x);
    }
    for (int i=0;i<n;i++){
        int x; cin>>x;
        s2.insert(x);
    }
    int tot=s1.size()+s2.size();
    tot>3?cout<<"YES":cout<<"NO";
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}