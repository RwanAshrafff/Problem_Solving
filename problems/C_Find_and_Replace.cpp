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
    int sz; cin>>sz;
    string s; cin>>s;
    map <char,vector<int> >mp;
    for (int i=0;i<sz;i++)
    {
        mp[s[i]].push_back(i);
    }
    for (auto &it:mp)
    {
       int odd=0,even=0;
        for (auto &i:it.second) // vector loop 
        {
           i&1?odd++:even++;
        }
       // cout<< (it.second.size())<<" "<<odd<<" "<<even<<" ";
    if (odd!=it.second.size() && even!=it.second.size())
    {
        cout<<"NO";
        return;
    }
    }
    cout<<"YES";
    }

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
