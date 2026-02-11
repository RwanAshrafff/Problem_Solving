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
    int n ; cin>>n;
    vector <int> v(n);
    for (auto &i:v) cin>>i;
    int op=0;
    sort (rall(v));
    // for (auto &i:v) cout<<i;
    while (true)
    {
        int pos=0;
        sort (rall(v));
        for (int i=0;i<n;i++)
        {
            if (v[i]>0) pos++;
        }
        if (pos<=1) break;
        v[0]--;
        v[1]--;
        op++;
    }
    cout<<op;
    }

signed main() {
    ROU
    int tc = 1;
   // cin >> tc;
    while (tc--) run(), cout << el;
}
