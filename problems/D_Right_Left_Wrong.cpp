#include<iostream>
#include<bits/stdc++.h>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(),v.rend()
#define ll long long
#define int long long
using namespace std;
const long long N=1e12+5;
const long long M=2e5+5;

void solve()
{
 int n ; cin>>n;
 vector<int>v(n);
 for (auto &i:v) cin>>i;
 vector<int>pref(n+5);
 pref[0]=v[0];
 for (int i=1;i<n;i++)
 {
   pref[i]=v[i]+pref[i-1];
 }
 //partial_sum(all(v),pref.begin()+1);
 //for (auto &i:pref) cout<<i<<" ";
 string s ; cin>>s;
 int l=0,r=n-1,sum=0;
 while(r>=l)
 {
    //cout<<l<<" "<<r<<" ";
    if (s[l]=='L' && s[r]=='R' && l!=0)  sum+=(pref[r]-pref[l-1]),l++,r--;
    if (s[l]=='L' && s[r]=='R' && l==0)  sum+=pref[r],l++,r--;
    if (s[l]!='L' ) l++;
    if (s[r]!='R') r--;
    //cout<<pref[r]<<" ";
 }
 cout<<sum;
}

signed main()
{
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) solve(),cout<<el;
}
