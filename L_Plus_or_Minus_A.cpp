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
const long long N = 1e5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

ll n,s[21];
int solve(int i=1,ll sum=s[0]){
    //base case 
    if (i==n){
        if(sum==0) return 0;
        else return 1e5;
    }
    //transition
    int val1=s[i],val2= -s[i];
    if (val1<0)  swap(val1,val2); // damnt an val1 pos
    int plus=solve(i+1,sum+val1) + (s[i]<0);
    int minus=solve(i+1,sum+val2)+ (s[i]>0);
    return min(plus,minus);
}

void run() {
    cin>>n;
    cin>>s[0];
    for (int i=1;i<n;i++){
        char sign ; cin>>sign;
        cin>>s[i];
        if (sign=='-') s[i]*=-1;
    }
    int ans=solve();
    ans>20?cout<<-1:cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}