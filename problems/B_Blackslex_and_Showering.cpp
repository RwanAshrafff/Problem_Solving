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
    vector<int>v(n);
    for (auto &i:v) cin>>i;
    int ans=0;
    int maxi=abs(v[0]-v[1]);
    for(int i=1;i<n;i++){
        ans+=abs(v[i]-v[i-1]);
        if(i<n-1)
            maxi=max(maxi,abs(v[i]-v[i-1])+abs(v[i]-v[i+1])-abs(v[i-1]-v[i+1]));
    }
    maxi=max(maxi,abs(v[n-1]-v[n-2]));
    cout<<ans-maxi;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}