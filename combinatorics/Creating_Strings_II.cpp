#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define ll long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
using namespace std;
const long long N = 1e7+5;
const long long mod = 1e9+7;

ll fact[N]={0};
ll fastpower(ll n ,ll m)
{
    ll ret=1;
    while(m)
    {
        if(m&1)
            (ret*=n)%=mod;
        (n*=n) %=mod;
        m/=2;
    }
    return ret;
}
void pre() 
{
    fact[0]=1;
    for (int i=1;i<N;i++)
    {
        fact[i]=i*fact[i-1]%mod;
    }
}
ll factInv[N]={0};
void inverse() 
{
    factInv[N-1]=fastpower(fact[N-1],mod-2);
    for (int i=N-2;i>=0;i--)
    {
        factInv[i]=(factInv[i+1]*(i+1))%mod;
    }
}

void run(){
    string s; cin>>s;
    ll sz=s.size();
    vector<ll> cnt(26,0);
    for(auto &i:s)
    {
        if (i>='a' && i<='z')
            cnt[i-'a']++;
    }
    ll res=1;
    for(auto &i:cnt)
    {
        res=(res%mod) * (factInv[i] %mod) %mod;
    }
     cout<<(fact[sz]*res)%mod;
    }

signed main() {
    ROU
    int tc = 1;
    pre();
    inverse();
    //cin >> tc;
    while (tc--) run(), cout << el;
}
