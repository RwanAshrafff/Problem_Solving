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
    int n ,k; cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v) cin >> x;
    // prime factorization
    map <int, int> mp;
    for (int i=0;i<n;i++) {
        int x = v[i];
        for (int j=2;j*j<=x;j++) {
            while (x%j==0) {
                mp[j]++;
                x /= j;
            }
        }
        if (x>1) mp[x]++;
    }
    for (auto &x : mp) {
        if (x.s % k !=0 ) {
           cout<<"NO"<<el;
           return;
        }
    }
    cout << "YES" << el;
}

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
