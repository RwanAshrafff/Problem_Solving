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
const long long N = 1e3+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

vector<int>isprime(N,1);
vector<int>v;
void sieve(){
    isprime[0]=isprime[1]=0;
    for (int i=2;i<=N;i++)
    {
        if (isprime[i])
        {
            v.pb(i);
            for (int j=i+i;j<N;j+=i){
                isprime[j]=0;
            }
        }
    }
}

void run() {
    int n,k; cin>>n>>k;
    sieve();
    int cnt=0;
    int sz=v.size()-1;

    for (int i=0;i<sz;i++)
    {
        if (v[i]+v[i+1]+1<=n && isprime[v[i]+v[i+1]+1])    cnt++;
    }
    //cout<<cnt;
    if (cnt>=k) cout<<"YES";
    else cout<<"NO";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}