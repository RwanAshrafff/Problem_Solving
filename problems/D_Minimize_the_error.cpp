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
    int  n ,k1,k2;
    cin >> n >> k1 >> k2;
    vector<int> a(n), b(n);
    ll totalop=k1+k2;
    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;
    vector <int> diff;
    for (int i=0;i<n;i++)   diff.push_back(abs(a[i]-b[i]));
    int i=diff.size()-1;
    while (totalop--) // 1 0
    { //2 op i=1
        sort(all(diff)); //0 0 
        diff[i]--;
        diff[i]=abs(diff[i]);
    }
    for (int i=0;i<n;i++)   diff[i]*=diff[i];
    cout<<accumulate(all(diff),0LL)<<el;
}
signed main() {
    ROU
    int tc = 1;
   // cin >> tc;
    while (tc--) run(), cout << el;
}
