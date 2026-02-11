#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define ll long long
#define int long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
using namespace std;
const long long M = 2e5+5;
const long long mod = 1e9+7;


ll ncr(int n){
    return n*(n-1)/2;
}

void run() {
    int n ; cin>>n;
    vector<string>v;
    map<char,int>mp;
    for (int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
        //cout<<v[i][0]<<" ";
        if (mp.count(v[i][0])) mp[v[i][0]]++;
        else mp[v[i][0]]=1;
    }
    int ans =0;
    for (auto &i:mp)
    {
       if (i.second>2 && i.second%2==0) ans+=2*(ncr((i.second)/2));
       else if (i.second>2 && i.second%2!=0) ans +=(ncr((i.second)/2)+ncr(((i.second)/2)+1));
    }
    cout<<ans;
}
int32_t main() {
    ROU
    int tc = 1;
   // cin >> tc;
    while (tc--) run(), cout << el;
}
