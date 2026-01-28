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
const long long mod = 1e9+7;

void run() {
    int n , x,cnt=0; cin>>n>>x;
    vector<int>a(n);
    vector <int>b(n);
    vector <int>diff;
    for (auto &i: a)cin>>i;
    for(auto &i :b) cin>>i;
    for (int i=0;i<n;i++) diff.pb((b[i]-a[i])+1);
    sort(all(diff));
    for (int i=0;i<n;i++)
    {
        if (diff[i]<=0) cnt++;
        else
        {
            if(x>=diff[i])
            {
                cnt++;
                x-=diff[i];
            }
        } 
    }
    cout<<(cnt>n/2?"YES":"NO");
    }

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
