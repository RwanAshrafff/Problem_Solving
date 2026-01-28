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
const long long N = 5263726;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

vector<bool> isprime(N,1);
vector<int>primes;
vector <int>ans;
void sieve(){
    isprime[0]=isprime[1]=0;
    for(int i=2;i<N;i++){
        if (isprime[i]){
            primes.pb(i);
            for (int j= 1ll * i * i ;j<N;j+=i)
                isprime[j]=0;
        }
    }
    for (int i=0;i<primes.size();i++){
        for (int j=i+1;j<primes.size();j++){
            if (1ll * primes[i]*primes[j] <= 10527451)
                ans.pb(primes[i]*primes[j]);
            else break;
            }
        }
        sort(all(ans));
    }

void run() {
    int n ; cin>>n;
    n--;
    cout<<ans[n];
}
signed main() {
    ROU
    sieve();
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
