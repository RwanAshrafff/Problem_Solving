#include <bits/stdc++.h>
using namespace std;
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define el "\n"
#define ll long long
//#define int long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
const long long M = 2e5+5;
const long long mod = 1e9+7;

void run() {
    ll towns ; cin>> towns;
    vector <ll>monster(towns+1);
    vector <ll> hero(towns);
    for(auto &i:monster) cin>>i;
    for(auto &i:hero)  cin>>i;
    ll ans=0;
    for (int i=0;i<towns;i++)
    {
        ans+=min(monster[i],hero[i]);
        hero[i]-=min(monster[i],hero[i]);

        ans+=min(monster[i+1],hero[i]);
        monster[i+1]-=min(monster[i+1],hero[i]);
        
    }
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
   // cin >> tc;
    while (tc--) run(), cout << el;
}
