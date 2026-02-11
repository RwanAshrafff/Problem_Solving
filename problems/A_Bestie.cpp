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
   int n; cin>>n;
   vector<int>v(n+1,0);
   int r=0;
   for (int i=1;i<=n;i++) cin >>v[i],r=gcd(r,v[i]);
   int ans=3;
   if (r==1) ans=0;
   for (int i=1;i<=n;i++){
    if (gcd(r,i)==1) ans=min(ans,n-i+1);
   }
   cout<<ans;
}

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}