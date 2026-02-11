#include <iostream>
#include <bits/stdc++.h>
#include <string>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define ll long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
using namespace std;
const long long M = 1e6+5;
const long long mod = 1e9+7;

void run() {
    int n ; cin>>n;
    vector<int>v(n);
    for(auto &i:v) cin>>i;
    if (n==2)
    {
        for(auto &i:v) cout<<i<< " ";
        return;
    }
    sort(all(v));
    double x=v[n-1]/2; //5
    int pos=(upper_bound(all(v),x))-v.begin();
    //2 4 6 9 11 
    //cout<<pos<<" "<<x;
    if (abs(x-v[pos])>abs(x-v[pos-1]))   pos--; 
    cout<<v[n-1]<< " "<<v[pos];
    }

int main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
