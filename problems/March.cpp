#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define ll long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
using namespace std;
const long long M = 2e5+5;
const long long mod = 1e9+7;

void run() {
  int n ; cin>>n;
  map <char,ll>mp;
  for (int i=0;i<n;i++)
    {
        string s ; cin>>s;
        if (s[0] == 'M' || s[0] == 'A' || s[0] == 'R' || s[0] == 'C' || s[0] == 'H') mp[s[0]]++;
    }
    ll ans =0;
    string s="MARCH";
    for (int i=0;i<5;i++)
    {
        for (int j=i+1;j<5;j++)
       {
            for (int k=j+1;k<5;k++)
            {
                ans+=mp[s[i]]*mp[s[j]]*mp[s[k]];
            }
        }
    }
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
   // cin >> tc;
    while (tc--) run(), cout << el;
}
