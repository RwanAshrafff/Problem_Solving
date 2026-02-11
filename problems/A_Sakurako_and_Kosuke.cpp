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
    int turn =1,x=0;
    int win;
    while (x<=n && x>=(-n))
    {
        if (turn&1)
        {
            x-=(2*turn)-1;
            win=1;
        }
        else 
        {
            x+=(2*turn)-1;
            win=0;
        }
        turn++;
    }
    win==0?cout<<"Kosuke":cout<<"Sakurako";
    }

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
