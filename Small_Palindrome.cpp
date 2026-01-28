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
    int x ,y;
    cin >> x >> y;
    string s;
    for (int i=0;i<x/2;i++){
        s+='1';
    }
    for (int i=0;i<y/2;i++){
        s+='2';
    }
    string r=s;
    reverse(r.begin(),r.end());
    cout<<s<<r;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
