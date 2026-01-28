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
const long long N = 1e9;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

void run() {
    int n ,c; cin>>n>>c;
    vector<int>v(n) ;
    for (auto &i:v) cin>>i;
    int l=0,r=N;
    while(l<=r){
        int mid=(l+r)/2;
        int tot=0;
        for(int i=0;i<n;i++){
            tot+= (v[i]+2*mid ) * (v[i]+2*mid);
            if (tot>c) break;
        } 
        if (tot==c) {
            cout<<mid;
            break;
        }
        if (tot>c) r=mid-1;
        else l=mid+1;
    }
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}