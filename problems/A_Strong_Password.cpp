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
    string s ; cin>>s;
    bool flg=1;
    if (s.size()==1 && s[0]!='z'){
        cout<<s[0] <<  (char) (s[0]+1);
        return;
    }
    else if (s.size()==1 && s[0]=='z'){
        cout<<s[0] <<  (char) (s[0]-1);
        return;
    }
    int n = s.size();
    for (int i=0;i<n;i++){
        cout<<s[i];
        int c =s[i];
        if (s[i]==s[i+1] && flg &&  s[i]!='z') cout<<(char) (c+1) ,flg=0;
        else if (s[i]==s[i+1] && flg && s[i]=='z') cout<<(char) (c-1) ,flg=0;
    }
    if (flg && s[n-1]=='z') cout<< (char) (s[n-1]-1);
    else if(flg && s[n-1]!='z') cout<<(char) (s[n-1]+1);

}
signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}