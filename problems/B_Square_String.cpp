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
const long long M = 2e5+5;
const long long mod = 1e9+7;

void run() {
   string s ; cin>>s;
   string chk1="",chk2="";
   int sz=s.size();
    if (sz%2!=0) 
    {
        cout<<"NO";
        return;
    }
    for (int i=0;i<sz/2;i++) chk1+=s[i];
    for (int i=sz/2;i<sz;i++) chk2+=s[i];
    //cout<<chk1<<" "<<chk2;
    cout<<((chk1==chk2)?"YES":"NO");
    }

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
