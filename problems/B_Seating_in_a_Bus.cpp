#include<iostream>
#include<bits/stdc++.h>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(),v.rend()
#define ll long long
using namespace std;
const long long N=1e12+5;
const long long M=2e5+5;

void solve()
{
   int n ; cin>>n;
   int freq[n+5]={0};
   vector <int> v(n);
   for (auto &i: v)  cin>>i;
    freq[v[0]]=1;
   for (int i=1;i<n;i++)
   {
        //cout<< v[i-1]<<" "<<v[i+1]<<" ";
        
        //cout<< v[i]-1<<" "<<freq[v[i]-1]<<" "<<v[i]+1<<" "<<freq[v[i]+1]<<" ";
        freq[v[i]]=1;
        if (freq[v[i]-1]==0 && freq[v[i]+1]==0)
        {
            cout<<"NO";
            return;
        }
   }
   cout<<"YES";
}

int main()
{
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) solve(), cout << el;
}
