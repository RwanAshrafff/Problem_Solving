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
const long long N = 1e7+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
const int dx8[] = {1, 0, -1, 0,1,-1,1,-1};
const int dy8[] = {0, 1, 0, -1,1,-1,-1,1};

vector<int>primes;
vector<int>isprime(N,1);
void sieve(){
    isprime[0]=isprime[1]=0;
    for (int i=2;i<N;i++)
    {
        if (isprime[i])
        {
            primes.push_back(i);
            for (int j=i+i;j<N;j+=i){
                isprime[j]=0;
            }
        }
    }
}
void run() {
    int n ; cin>>n;
    for (int i=0;i<n;i++){
        cout<<primes[i]*primes[i+1]<<" ";
    }
    
}
signed main() {
    ROU
    sieve();
    int tc = 1;
    cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}
// gcd 2 5 7