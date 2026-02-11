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
    int n; cin >> n;
    string s ;cin>>s;
    map <char, int> mp;
    for (int i=1;i<n-1;i++) mp[s[i]]++; 
    for (auto it : mp) {
        if (it.second > 1 || it.first == s[0] || it.first == s[n-1]) {
            cout << "Yes";
            return;
        }
    }
    cout<< "No";
}

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
