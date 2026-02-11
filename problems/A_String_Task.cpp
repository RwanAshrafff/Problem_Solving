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
    string s ; cin>>s;
    string r ;
    if(s[0]!='i' || s[0]!='o' || s[0]!='a' || s[0]!='e' || s[0]!='u' || s[0]!='y') r+='.';
    for (int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        if (s[i]=='i' || s[i]=='o' || s[i]=='a' || s[i]=='e' || s[i]=='u' || s[i]=='y') continue;
        r+=s[i];
        if(i!=s.size()-1)r+='.';
    }
    if (r[r.size()-1] !='.') cout<<r;
    else {
        for (int i=0;i<r.size()-1;i++)  cout<<r[i];
    }
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}