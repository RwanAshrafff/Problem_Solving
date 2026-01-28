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
   int n ,k; cin>>n>>k;
    vector <int> v(n);
    vector<int>ones(n,1);
    for (auto &i:v) cin>>i;
    //for (auto &i:v) cout<<i;
    while (true)
    {
        int sum=0;
        for (int i=0;i<n;i++)    sum+=ones[i];
        //cout<<sum;
        if (sum%k==0)
        {
            for (auto &i:ones) cout<<i<<" ";
        cout<<el;
        }
    int j=n-1;
    while (j>=0)
    {
        if (v[j]>ones[j])
        {
            ones[j]++;
            break;
        }
        else
        {
            ones[j]=1;
            j--;
        }
    }
         if (j<0) break;
    }

}
int main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
