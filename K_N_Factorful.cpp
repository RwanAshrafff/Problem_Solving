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

vector <bool> isprime(N,1);
vector <int> cntprimes(N);
vector<vector<int> >v(11);

void pre()
{
   v[0].pb(1);
   isprime[0]=isprime[1]=0;
   for (int i=2;i<N;i++){
     if (isprime[i]){
        cntprimes[i]=1;
        for (int j=i+i;j<N;j+=i){
            cntprimes[j]++;
            isprime[j]=0;
        }
    }
}
for (int i=2;i<N;i++) v[cntprimes[i]].pb(i);
}

void run() {
    int a,b,n ; cin >> a >> b >> n;
    cout<< upper_bound(v[n].begin(),v[n].end(),b) - lower_bound(v[n].begin(),v[n].end(),a) ;   
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    pre();
    while (tc--) run(), cout << el;
}