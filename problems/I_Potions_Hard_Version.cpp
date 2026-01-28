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
    int n ; cin >>n;
    int ans=0,sum=0;
    priority_queue<int,vector<int>,greater<int>> pq;
    for (int i=0;i<n;i++)
    {
        int x; cin >> x;
        pq.push(x);
        sum+=x;
        ans++;
        if (sum <0)
        {
            sum -= pq.top();
            pq.pop();
            ans--;
        }
    }
    cout << ans;
}

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
