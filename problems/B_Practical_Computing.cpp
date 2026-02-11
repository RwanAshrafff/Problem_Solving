#include <bits/stdc++.h>
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
const long long N = 2e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

ll pascal[35][35];
void pre(){
    pascal[0][0] = 1;

    for(int i = 1; i < 35; i++){
        pascal[i][0] = 1;
        for(int j = 1; j < i+1; j++){
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }
}


void run() {
    int n ;cin>>n;
    for (int i=0;i<n;i++){
        cout<<el;
        for (int j=0;j<n;j++){
            if (pascal[i][j] !=0 )cout<<pascal[i][j]<<" ";
        }
    }
}
signed main() {
    ROU
    int tc = 1;
    pre();
    //cin >> tc;
    while (tc--) run(), cout << el;
}