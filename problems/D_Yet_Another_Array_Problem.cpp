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
const long long N = 60;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

void run() {
    int n ; cin>>n;
    vector<int>v(n);
    vector<int>primes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
    for (auto &i:v) cin>>i;
    for (auto &i : primes){
        {
            for(auto &j:v){
                if ((j%i)!=0) {
                cout<<i;
                return;
            }
        }
    }
    }
    cout<<-1;
}
signed main() {
    ROU
    int tc = 1; 
    cin >> tc;
    while (tc--) run(), cout << el;
}