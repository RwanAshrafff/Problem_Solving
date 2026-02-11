#include<iostream>
#include<bits/stdc++.h>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(),v.rend()
#define ll long long
//#define int long long
using namespace std;
const long long N=1e12+5;
const long long M=2e5+5;

 
void solve()
{
 string s ; cin>>s;
 int sz=s.size()-1;
 if (stod(s)== stoi(s))
 {
    cout<<stoi(s);
    return;
 }

 while (true)
 {
    if (s[sz]=='0') s[sz]='*';
    else break;
    sz--;
 }
 //cout<<s;

 for (char ch : s)
 {
    if (ch =='*') continue;
   else cout<<ch;
 }
 
}

signed main()
{
    ROU
    int tc = 1;
   //cin >> tc;
    while (tc--) solve(),cout<<el;
}
