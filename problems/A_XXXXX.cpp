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

void run() {
    int n,x,sum=0; cin>>n>>x;
    vector<int>v(n);
    for(auto &i:v) cin>>i,sum+=i;
    if (sum%x!=0) {
        cout<<n;
        return;
    }
    int ptr1=1e4;
    int ptr2=1e4;
    for (int i=0;i<n;i++){
        if (v[i]%x!=0){
            ptr1=i; 
            break;
        }
    }
    for (int i=n-1;i>=0;i--){
        if (v[i]%x!=0){
            ptr2=i; 
            break;
        }
    }
    if (ptr1==1e4 && ptr2==1e4)  cout<<-1; 
    else cout<<max(n-ptr1-1,ptr2);
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}