#include <bits/stdc++.h>
using namespace std;
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define el "\n"
#define ll long long
//#define int long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
const long long M = 2e5+5;
const long long mod = 1e9+7;

void run() {
    int n ,k; cin>>n>>k;
    //97 122 
    int num=97;
    string ans ;
    for (int i=0;i<k;i++){
        ans+= char(num);
        num++;
    }
    num=97;
    if (n-k >k){
        for (int i=0;i<n-k;i++){
        if(i%2==0) ans+='a';
        else ans+= 'b';
    }
    }
    else{
        for (int i=0;i<n-k;i++){
        ans+= char(num);
        num++;
    }
    }
    cout<<ans;
}

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
