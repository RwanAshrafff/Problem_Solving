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
  int n,x;
  cin>>n>>x;
  vector <int> v(n);
  for (auto &i:v) cin>>i;
  int ans =0;
  for (int i=1;i<n;i++)
  {
    int cnt=1;
    vector <int> copy; // 1 2 1 4 5 
    copy=v;
    copy[i]*=x;
    for (int j =1;j<n;j++)
    {
        if (copy[j-1]<=copy[j]) cnt++;
        else  cnt=1;
        ans = max (ans,cnt);
    }
  }
  cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
