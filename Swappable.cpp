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
const long long M = 1e7+5;
const long long mod = 1e9+7;

ll nc2(ll n){
    return (n*(n-1)/2);
}

void run() {
    ll n ; cin >>n;
    vector <ll> v(n);
    map <int,int>mp;
    for (int i=0;i<n;i++)
    {
        int x ; cin>>x;
        if (mp.count(x)) mp[x]++;
        else mp[x]=1;
    }
    ll ans =nc2(n);
    for (auto &i:mp)
    {
       if (i.s>1) ans-=(nc2(i.s));
    }
    cout<<ans;
    }

signed main() {
    ROU
    int tc = 1;
   // cin >> tc;
    while (tc--) run(), cout << el;
}
