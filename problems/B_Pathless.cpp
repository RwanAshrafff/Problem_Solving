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
const long long N = 2e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

void run() {
    int n ,s ;cin >> n >> s;
    int sum=0;
    vector<int> v(n);
    int ones=0,twos=0,zeros=0;
    for (auto &x : v) 
    {
        cin >> x;
        if (x==1) ones++;
        if (x==2) twos++;
        if (x==0) zeros++;
        sum += x;
    }
    vector<int> ans;
    for (int i=0; i<ones; i++) ans.push_back(1);
    for (int i=0; i<twos; i++) ans.push_back(2);
    for (int i=0; i<zeros; i++) ans.push_back(0);
    s-=sum;
    if (s >= 0 && s!=1) {
        cout << -1;
        return;
    }
    for (auto &i : ans) cout<< i << " ";

}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
