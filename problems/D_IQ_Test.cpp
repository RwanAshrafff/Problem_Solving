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
string arr[4]{};
for (int i=0;i<4;i++)
        cin>>arr[i];
for (int i=0;i<3;i++)
{
    for (int j=0;j<3;j++)
    {
        int cntb=0,cntw=0;
        if (arr[i][j]=='#') cntb++;
        if (arr[i][j+1]=='#') cntb++;
        if (arr[i+1][j]=='#') cntb++;
        if (arr[i+1][j+1]=='#') cntb++;
        cntw=4-cntb;
        if (cntb>=3 || cntw>=3)
        {
            cout<<"YES";
            return;
        }
    }
}
cout<<"NO";
}

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
