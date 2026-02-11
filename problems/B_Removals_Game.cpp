#include<iostream>
#include<bits/stdc++.h>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(),v.rend()
#define ll long long
using namespace std;
const long long N=1e12+5;
const long long M=1e9+5;


void solve()
{
    int n; cin>>n;
    vector <int> alice(n);
    vector<int>bob(n);
    for (auto &i:alice) cin>>i;
    for (auto &i:bob) cin>>i;
    int cnt=0;
    for (int i=0;i<n;i++)
    {
            if (alice[i]!=bob[i]) cnt++;
    }
    if (cnt==0) //low homa zy b3d 
    {
        cout<<"Bob";
        return;
    } 
    reverse(all(alice));
    cnt=0;
    for (int i=0;i<n;i++)
    {
            if (alice[i]!=bob[i]) cnt++;
    }
    cout<<(cnt>0?"Alice":"Bob");
}

int main()
{
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) solve(), cout << el;
}
