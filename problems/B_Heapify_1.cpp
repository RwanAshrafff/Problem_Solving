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
    vector<int>v(n+1),copy;
    for (int i=1;i<=n;i++) cin>>v[i],copy.pb(v[i]);

    for (int i=n;i>0;i--){
        int j=i;
        while((2*j)<=n && (v[2*j]<v[j])){
        swap(v[j],v[2*j]);
        j*=2;
        }
    }
    sort(all(copy));
    for (int i=1;i<=n;i++){
        if (copy[i-1]!=v[i]) {
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