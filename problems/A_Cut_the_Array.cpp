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
const long long N = 2e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

void run() {
    int n; cin>>n; 
    vector<int>v(n);
    vector<int>pref(n+1,0);
    for(auto &i:v) cin>>i;
    for (int i=0;i<n;i++) pref[i+1]=pref[i]+v[i];
    for(int i=1;i<n;i++){
        for (int j=i+1;j<n;j++){
            int s1=(pref[i]-pref[0])%3;
            int s2=(pref[j]-pref[i])%3;
            int s3=(pref[n]-pref[j])%3;
            if ( (s1==s2 && s2==s3) || (s1!=s2 && s2!=s3 && s1!=s3)){
                cout<<i<<" "<<j;
                return;
            }
        }
    }
    cout<<0<<" "<<0;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}