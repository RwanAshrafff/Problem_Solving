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
    int n,m; cin>>n>>m;
    vector<int>a(n),b(m);
    for (auto &i:a) cin>>i;
    for(auto&i:b) cin>>i;
    sort(all(b));
    a[0]=min(a[0],b[0]-a[0]);
    for (int i=1;i<n;i++){
        int l=0,r=m-1,ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            int x=b[mid];
            if (x-a[i]>=a[i-1]){
                ans=mid;
                r=mid-1;
            }
            else    l=mid+1;
        }
        if (ans!=-1) {
            if(a[i]<a[i-1]) a[i]=b[ans]-a[i];
            else a[i]=min(a[i],b[ans]-a[i]);
        }
        if (ans==-1 && a[i]<a[i-1]){
            cout<<"NO";
            return;
        }
    } 
    cout<<"YES";
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}