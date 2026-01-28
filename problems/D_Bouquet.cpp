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
const long long N = 2e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

int mul(int a, int b){return ((a%mod)*(b%mod)) % mod ;}
int add(int a, int b){return ((a%mod)+(b%mod)) % mod ;}
int sub(int a, int b){return ((a%mod)-(b%mod)+mod) % mod ;}

int fastpow(int a, int b){
    if(b == 0) return 1;
    int ret = fastpow(a, b/2);
return mul(ret, mul(ret, (b&1 ? a:1)));
}

ll ncr(int n ,int r)
{
    if(r>n) return 0; 
    int npr=1;
    for (int i=n;i>n-r;i--) npr=mul(npr,i);
    int fact=1;
    for (int i=1;i<=r;i++) fact=mul(fact,i);
    return mul(npr,fastpow(fact,mod-2));
}

void run() {
    int n,a,b;
    cin>>n>>a>>b;
    cout<<sub(sub(fastpow(2,n),add(ncr(n,a),ncr(n,b))),1);
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}