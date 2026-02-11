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
int freq[M]={};
void run() {
    int n ; cin>>n;
    vector <int>v(n+5);
    for (int i=1;i<=n;i++)
    {
        cin>>v[i];
        freq[v[i]]++;
    }
    ll ans=0;
   for (int i=1;i<=n;i++) ans+=(freq[i]) *(freq[i]-1)/2; // count identical pairs 
   for (int i=1;i<=n;i++)
   {
    cout<<ans-freq[v[i]]+1<<el;
   }
    }

signed main() {
    ROU
    int tc = 1;
   // cin >> tc;
    while (tc--) run(), cout << el;
}
