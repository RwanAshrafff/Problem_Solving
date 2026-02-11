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
    int n; cin>>n;
    map<int ,int>mp;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        mp[x]++;
    }
    int ans=0,two=0,three=0,one=0;
    for (auto &i: mp)
    {
        if (i.first==4) ans+=i.second;
        else if (i.first==2 ) ans+=(i.second/2),two+=i.second;
        else if (i.first==3) ans+=i.second,three+=i.second;
        else if (i.first==1) one =i.second;
    }
     //cout<<two<<" "<<three<<" "<<ans;
     one-=three;
     if(two&1) 
     {
        ans++;
        one-=2;
     }
     if (one>0) ans+=((one+3)/4);
    cout<<ans;
    }

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
