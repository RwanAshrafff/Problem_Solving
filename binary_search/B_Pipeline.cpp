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
    int n,k;cin>>n>>k;
    int l=0,r=k,ans=-1;
    ll sum = (k*(k+1)/2);
    while(r>=l){
        int mid=(l+r)/2;
        ll bst=sum-((k-1)+(k-mid)*(k-mid-1)/2);
        if(bst>=n) r=mid-1,ans=mid;
        else l=mid+1;
    }
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}