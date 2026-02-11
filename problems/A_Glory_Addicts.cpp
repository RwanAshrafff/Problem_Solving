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
    vector<int>a(n),b(n),ones,zeros;
    for (auto &i:a) cin>>i;
    for (auto &i:b) cin>>i;
    for (int i=0;i<n;i++){
        if (a[i]==0) zeros.pb(b[i]);
        else ones.pb(b[i]);
    }
    sort(rall(zeros));
    sort(rall(ones));
    sort(all(b));
    int ans=0;
    if (ones.size()==zeros.size()){
        for (int i=0;i<ones.size();i++) ans+= (2*ones[i]);
        for (int i=0;i<zeros.size();i++) ans+=(2*zeros[i]);
        cout<<ans-b[0];
        return;
    }
    int num=min(zeros.size(),ones.size()); 
    for (int i=0;i<num;i++)  ans+= (2* zeros[i]),ans+= (2* ones[i]); 
    for (int i=num;i<ones.size();i++) ans+=ones[i];
    for (int i=num;i<zeros.size();i++) ans+=zeros[i];
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}