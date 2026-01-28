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
   vector <ll> odd;
   vector <ll>even;
   ll n ; cin>>n;
   ll sum=0;
   for (int i=0;i<n;i++)
    {
        ll x ; cin>>x;
        if((x&1)) odd.push_back(x);
        else even.push_back(x);
    }
    for (auto &i: even) sum+=i;
    sort (all(odd),greater<>());
    if(odd.size()%2==0) 
    {
        for (auto &i: odd) sum+=i;
    }
    else 
    {
        for (int i=0;i<odd.size();i++)
        {
            sum+=odd[i];
        }
        sum-=odd[(odd.size()-1)];
    }
    cout<<sum;
    }

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
