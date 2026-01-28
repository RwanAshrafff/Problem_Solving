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
    string  a, b ; 
    cin>>a>>b;
    int ptr = b.length()-1;
    vector <bool> flag(a.length(),false);
    for (int i=a.length()-1;i>=0;i--)
    {
        if (ptr>=0 && a[i]==b[ptr])
        {
            ptr--;
            flag[i]=true;
        }
    }
    if (ptr!=-1)
    {
        cout<<-1;
        return;
    }
    int ans = 0,cnt=1;
    for (int i=0;i<a.length();i++)
    {
        if (flag[i]==false) ans+=cnt;
        else cnt++;
    }
    cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
