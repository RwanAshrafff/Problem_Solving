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

void run(){
    ll  n;cin>>n;
    ll res=1;
    for (ll i=1;i<=n;i++)
        res=((res%mod) *(i%mod))%mod;
    cout<<res;
    }


int main() {
    ROU
    int tc = 1;
   // cin >> tc;
    while (tc--) run(), cout << el;
}
