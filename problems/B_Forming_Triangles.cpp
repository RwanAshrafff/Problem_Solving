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
const long long M = 3e5+5;
const long long mod = 1e9+7;
ll ncr(int n, int r) {
    if (r > n || r < 0 || n < 0) return 0; 
    if (r == 0 || r == n) return 1;
    
    ll res = 1;
    for (int i = 1; i <= r; i++) {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}

void run() {
    int n ; cin>>n; 
    map<int,int>mp;
    for (int i=0;i<n;i++)
    {
        int x; cin>>x;
        mp[x]++;
    }
    int ans =0;
    ll sum=0;
    for (auto &i: mp)  
    {
        if (i.second>=3) ans+=ncr(i.second,3);
        if (i.second>=2) ans+=ncr(i.second,2) * sum;
        sum+=i.second;
    }
    cout<<ans;
    }

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
