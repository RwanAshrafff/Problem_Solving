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

void run() {
    string s; cin>>s;
    string t = "1234567890";
    int diff=0;
    if(s[0]=='0') diff+=9;
    else diff=(s[0]-'0')-1;
    
    for (int i=0;i<3;i++){
            int pos1= t.find(s[i]);
            int pos2 =t.find(s[i+1]);
            diff+=abs(pos2-pos1);
    }
    cout<<diff+4;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}