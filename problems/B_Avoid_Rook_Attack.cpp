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
    string arr[8];
    for (int i=0;i<8;i++) cin>>arr[i];
    vector <int>row(8,0);
    vector <int>col(8,0);
    for (int i=0;i<8;i++)
    {
          for (int j=0;j<8;j++)
          {
            if (arr[i][j]=='#')
            {
                row[i]=1,col[j]=1;
            }
          }
    }
    int cnt=0;
    for (int i=0;i<8;i++)
    {
          for (int j=0;j<8;j++)
          {
            if (row[i]==0 && col[j]==0)
            cnt+=1;
          }
    }
    cout<<cnt;
    }

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
