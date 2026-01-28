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
    int n ; cin>>n;
    string s ; cin>>s;
    int a=0,b=0,ans1=0,ans2=0;
    vector<int>prefa(n+1),prefb(n+1),suffa(n+1),suffb(n+1);
    for (int i=0;i<n;i++){
        if (s[i]=='a') a++;
        else b++;
        prefa[i]=a;
        prefb[i]=b;
    }
    a=0;b=0;
    for (int i=n-1;i>=0;i--){
        if (s[i]=='a') a++;
        else b++;
        suffa[i]=a;
        suffb[i]=b;
    }
    for(int i=0;i<n;i++){
        if (s[i]=='a') ans1+=min(prefb[i],suffb[i]);
        else ans2+=min(prefa[i],suffa[i]);
    }
    cout<<min(ans1,ans2);
}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}