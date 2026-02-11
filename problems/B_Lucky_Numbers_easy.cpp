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
const long long M = 2e5+5;
const long long mod = 1e9+5;

void run() {
   ll n ; cin>>n;
   ll mini=LLONG_MAX;
   for (int i=0;i< (1<<10);i++){ 
    ll four=0,seven=0,ans=0;
    for (int j=0;j<10;j++){ 
        if (i&(1<<j)) four++,ans=ans*10+4;  
        else seven++,ans=ans*10+7; 
        if (four==seven && ans>=n) mini=min(mini,ans);
    }
   }
   cout<<mini;
}

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
