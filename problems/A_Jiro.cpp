#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define ll long long
#define int long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
using namespace std;
const long long M = 2e5+5;
const long long mod = 1e9+7;

void run() {
    char sab ,sac,sbc; 
    cin>>sab>>sac>>sbc;
    //C A B
    if (sab=='<') // b akbr mn a 
    {
        if (sac=='<' && sbc=='<')   cout<<'B';
        else if (sac=='<' && sbc=='>')  cout <<'C';
        else if (sac=='>' && sbc=='>')  cout <<'A';
    }
    else if (sab=='>')
    {
        if (sac=='<' && sbc=='<')   cout<<'A';
        else if (sac=='>' && sbc=='>') cout <<'B';
        else if (sac=='>' && sbc=='<')  cout <<'C';
    }
    }

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
