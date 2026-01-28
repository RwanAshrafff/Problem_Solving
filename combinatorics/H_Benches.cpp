#include<iostream>
#include<bits/stdc++.h>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(),v.rend()
#define ll long long
//#define int long long
using namespace std;
const long long N=1e12+5;
const long long M=2e5+5;
ll npr(int n, int r){
    ll ans = 1;
    for(int i = n; i > n-r; i--) ans *= i;
    return ans;
}

ll pascal[101][101] = {0};
void pas(){
    pascal[0][0] = 1;
 
    for(int i = 1; i < 101; i++){
        pascal[i][0] = 1;
        for(int j = 1; j < i+1; j++){
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }
}
ll ncr(int n, int r){
    return pascal[n][r];
}
 
void solve()
{
  ll n ; cin>>n;
  cout<< ncr(n,5)*npr(n,5);
}

signed main()
{
    ROU
    pas();
    int tc = 1;
  //cin >> tc;
    while (tc--) solve(),cout<<el;
}
