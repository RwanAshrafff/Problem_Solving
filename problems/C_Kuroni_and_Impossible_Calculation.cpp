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
const long long M = 1e6+5;
const long long mod = 1e9+7;

void run() {
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for (auto &i:v) cin>>i;
    if(n>m) 
    {
        cout<<0;
        return;
    }
    ll res=1LL;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            ll diff=abs(v[i]-v[j]);
            res=((diff%m) *(res%m))%m;
        }
        }
    cout<<res;
    }

int main() {
    ROU
    int tc = 1;
   // cin >> tc;
    while (tc--) run(), cout << el;
}
