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
    int n ; cin>>n;
    queue <string> q;
    map <string , int >mp;
    vector <string >v(n);
    for (auto &i:v) cin>>i;
    for (int i=n-1;i>=0;i--)
    {
        if (mp[v[i]]==0)  q.push(v[i]);
        mp[v[i]]++;
    }
    while(!q.empty())
    {
        cout<<q.front()<<el;
        q.pop();
    }
    }

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
