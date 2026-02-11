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
    int n,x,y ; cin>>n>>x>>y;
    string s ; cin>>s;
    int eight=0;
    for (auto i:s) if (i=='8') eight++;
    x=abs(x),y=abs(y);
    if (x>n || y>n ) cout<<"NO";
    else{
        if ( (x+y-eight) <=n ) cout<<"YES";
        else cout<<"NO";
    }
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}