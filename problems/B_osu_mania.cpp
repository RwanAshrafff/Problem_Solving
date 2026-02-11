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
    int row; cin>>row;
    string arr[row];
    for (int i=0;i<row;i++) cin>>arr[i];
    for (int i=row-1;i>=0;i--)
    {
        for (int j=0;j<=4;j++)
        {
            if (arr[i][j]=='#') cout<<j+1<<" ";
        }
    }
    }

signed main() {
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) run(), cout << el;
}
