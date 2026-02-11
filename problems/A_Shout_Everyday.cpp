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
    int a,b,c; cin>>a>>b>>c;
    if (a==0) a=24;
    if (b>c)
    {
       bool arr[25]={0};
       for (int i=b;i<=24;i++) arr[i] =1;
       for(int i=1;i<=c;i++) arr[i]=1;
       cout<<(arr[a]?"No":"Yes");
    }
    else 
    {
         bool arr[25]={0};
        for (int i=b;i<=c;i++) arr[i]=1;
        cout<<(arr[a]?"No":"Yes");
    }

}

int main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run(), cout << el;
}
