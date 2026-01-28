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
const long long N = 1e17;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

void run() {
    int n,x; cin>>n>>x;
    vector<int>v(n);
    for (auto &i:v) cin>>i;
    int l=0,r=N,ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        int diff=0;
        for (int i=0;i<n;i++){
            if (mid>v[i])diff+=mid-v[i];
            if (diff>x) break;
        }
        if (diff>x) r=mid-1;
        else if (diff<=x) ans=mid,l=mid+1;
    }
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}