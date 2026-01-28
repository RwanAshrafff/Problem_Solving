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
const long long N = 1e6+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

vector<int>isprime(N,1);
void sieve(){
    isprime[0]=isprime[1]=0;
    for (int i=2;i*i<=N;i++)
    {
        if (isprime[i])
        {
        for (int j=i+i;j<N;j+=i){
            isprime[j]=0;
        }
        }
    }
}
void run() {
    int n ; cin>>n;
    sieve();
    while(n--)
    {
        int x ; cin>>x;
        ll sqr=sqrt(x);
        if (sqr*sqr==x && isprime[sqr])  cout<<"YES"<<el;
        else cout<<"NO"<<el;
    }
    
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
