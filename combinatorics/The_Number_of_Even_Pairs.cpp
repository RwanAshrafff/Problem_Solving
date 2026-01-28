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
const long long M = 1e4+5;
const long long mod = 1e9+7;

ll pascal[101][101];
void pre(){
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
void run() {
        int n,m; cin>>n>>m;
        cout<<ncr(n,2)+ncr(m,2);
    }

int main() {
    ROU
    pre();
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
