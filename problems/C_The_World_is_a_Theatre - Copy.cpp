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
const long long M = 1e6+5;
const long long mod = 1e9+7;
ll pascal[101][101];
void pre(){
    pascal[0][0] = 1;
 
    for(ll i = 1; i < 101; i++){
        pascal[i][0] = 1;
        for(ll j = 1; j < i+1; j++){
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }
}
ll ncr(ll n, ll r){
    return pascal[n][r];
}
void run() {
    ll n,m,t; cin>>n>>m>>t;
    int ans=0;
    for (int i =4;i<=t-1;i++) ans+=ncr(n,i)*ncr(m,t-i);
    cout<<ans;
    }

signed main() {
    ROU
    int tc = 1;
     pre();
    //cin >> tc;
    while (tc--) run(), cout << el;
}
