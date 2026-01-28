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

bool vow(char c){
    return (c=='a' || c=='e');
}

void run() {
    // CV CVC
    int n ; cin>>n;
    string s ;cin>>s;
    string ans ;
    for (int i=0;i<n;i++){
        if (vow(s[i])){ //v
            ans+=s[i];
            if ( ((i+2)<n &&  vow(s[i+2])==0 ) || ((i+1)==n-1)){
                ans+=s[i+1];
                i++;
            }
            if ((n-1)!=i) ans+='.';
        }
        else ans += s[i]; //c 
    }
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}