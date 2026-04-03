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
    int cnt=0,sz=s.size(),flg=0,flg2=0;
    //"Danil", "Olya", "Slava", "Ann" and "Nikita".
    for (int i=0;i<sz;i++){
        if (s[i]=='D'){
            if (s[i+1]=='a' && s[i+2]=='n' && s[i+3]=='i' && s[i+4]=='l'){
                cnt++;
                if (cnt>1) flg=1;
                flg2=1;
            }
        }
        else if (s[i]=='O'){
            if (s[i+1]=='l' && s[i+2]=='y' && s[i+3]=='a'){
                cnt++;
                if (cnt>1) flg=1;
                flg2=1;
            }
        }
        else if(s[i]=='S'){
            if (s[i+1]=='l' && s[i+2]=='a' && s[i+3]=='v' && s[i+4]=='a' ){
                cnt++;
                if (cnt>1) flg=1;
                flg2=1;
            }
        }
        else if (s[i]=='A'){
            if (s[i+1]=='n' && s[i+2]=='n' ){
                cnt++;
                if (cnt>1) flg=1;
                flg2=1;
            }
        }
        else if (s[i]=='N'){
            if (s[i+1]=='i' && s[i+2]=='k' && s[i+3]=='i' && s[i+4]=='t' && s[i+5]=='a'){
                cnt++;
                if (cnt>1) flg=1;
                flg2=1;
            }
        }
    }
    if (flg2==0) {
        cout<<"NO";
        return;
    }
    flg?cout<<"NO":cout<<"YES";
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}