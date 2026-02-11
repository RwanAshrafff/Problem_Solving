#include <iostream>
#include <bits/stdc++.h>
#include <string>
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
    string s; cin>>s;
    int cnt=0;
    vector <int> v(26); // fe kol l idx 
    for (int i=0;i<s.size();i++)
    {
        v[s[i]-'A']=i; // key bord eli 3ndy 
    }
   for (int i=1;i<s.size();i++)
    {
       cnt+=abs((v[i]-v[i-1]));
    }
    cout<<cnt;
    }

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
