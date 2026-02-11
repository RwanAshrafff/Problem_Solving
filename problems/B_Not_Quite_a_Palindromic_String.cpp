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
    int n ,k; cin>>n>>k;
    string s ; cin>>s;
    int ones=0,zeros=0;
    for (int i=0;i<n;i++){
        if (s[i]=='0') zeros++;
        else ones++;
    }
    k*=2;
    int cnt= n -k; // remaining 
    while(cnt){
        if (ones>0 && zeros>0) ones--,zeros--,cnt-=2;
        else  break;
    }
    if (ones%2!=0 || zeros%2!=0 || cnt) cout<<"NO";
    else cout<<"YES";
}

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
