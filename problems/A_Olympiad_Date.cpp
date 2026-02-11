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
const long long M = 2e5+5;
const long long mod = 1e9+7;

void run() {
   int n ; 
   cin>>n;
   vector <int> v(n);
   for (auto &x : v) cin>>x;
   int zeros=0, ones=0,twos=0,theres=0,fives=0,ans=0;
   for (int i=0;i<n;i++)
   {
    if (v[i]==0) zeros++;
    else if (v[i]==1) ones++;
    else if (v[i]==2) twos++;
    else if (v[i]==5) fives++;
    else if (v[i]==3) theres++;
    if (zeros>=3 && ones>=1 && twos>=2 && theres>=1 && fives>=1 )
    {
        ans=i+1;
        break;
    }
   }
   cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
