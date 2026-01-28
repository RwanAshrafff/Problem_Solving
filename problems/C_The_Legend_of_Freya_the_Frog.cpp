#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define ll long long
#define int long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
using namespace std;
const long long M = 2e5+5;
const long long mod = 1e9+7;

void run() {
    int x,y,k; cin>>x>>y>>k;
    int xx=(x+k-1)/k,yy=(y+k-1)/k;
    if (xx>yy) cout<<2*(xx)-1;
    else// equal aw y/k akbr
    cout<<2*(yy);
    }

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
