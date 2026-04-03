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
    string a,b; cin>>a>>b;

    int even=0,odd=0;
    for (int i=0;i<n;i+=2){
        if(a[i]=='0') even++;
        if(b[i]=='0') odd++;
    }
    for (int i=1;i<n;i+=2){
        if(a[i]=='0') odd++;
        if(b[i]=='0') even++;
    }
    if (odd>=n/2 && even>=((n+1)/2) )   cout<<"YES";
    else cout<<"NO";
}

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
// 10000
// 01010 ->  01000
// 