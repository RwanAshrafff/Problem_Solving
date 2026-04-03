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
    cout<<abs(v[0]-v[1])<<" "<< abs(v[0]-v[n-1])<<el;
    for(int i=1;i<(n-1);i++){
        cout<<min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]))<< " "<<max(abs(v[i]-v[0]),abs(v[i]-v[n-1]))<<el;
    }
    cout<<abs(v[n-1]-v[n-2])<<" "<< abs(v[n-1]-v[0])<<el;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}