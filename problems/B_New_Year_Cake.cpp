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
    int a,b; cin>>a>>b;
    int layer=1,ans1=0,ans2=0,turn=0;
    int aa=a,bb=b;
    while(true){
        if (turn&1){
            if(aa>=layer) aa-=layer;
            else break;
        }
        else{
            if(bb>=layer) bb-=layer;
            else break;
        }
        turn++;
        ans1++;
        layer*=2;
    }
    aa=a,bb=b,turn=0,layer=1;
    while(true){
        if(turn&1){
            if(bb>=layer)   bb-=layer;
            else break;
        } 
        else
        {
            if(aa>=layer)   aa-=layer;
            else break;
        } 
        turn++;
        ans2++;
        layer*=2;
    }
    cout<<max(ans1,ans2);
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}