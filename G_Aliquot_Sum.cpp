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

ll sum;
void get_devisors(int n){
    sum=0;
    for (int i=1;(i*i)<=n;i++)
    {
        if (n%i==0){
            sum+=i;
            if ( (i*i) != n) sum+=(n/i);
        }
    }
}

void run() {
    int t ; cin>>t;
    while(t--){
        int n ; cin>>n;
        get_devisors(n);
        if ((sum-n)>n) cout<<"abundant"<<el;
        else if ((sum-n)==n) cout<<"perfect"<<el;
        else cout<<"deficient"<<el;
    }
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}