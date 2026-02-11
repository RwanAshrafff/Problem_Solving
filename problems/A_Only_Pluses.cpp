#include<iostream>
#include<bits/stdc++.h>
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el "\n"
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(),v.rend()
#define ll long long
using namespace std;
const long long N=1e12+5;
const long long M=1e9+5;


void solve()
{
  int cntr=5;
  int arr[3];
  for (int i=0;i<3;i++) cin>>arr[i];
  sort(arr,arr+3);
  //for (int i=0;i<3;i++) cout<<arr[i];
  while (cntr)
  {
       if (arr[0] <= arr[1] && arr[0] <= arr[2]) arr[0] ++;
        else if (arr[1] <= arr[0] && arr[1] <= arr[2])
            arr[1] ++;
         else  arr[2] ++;
        cntr--;
  }
  //if(cntr%5!=0) arr[2]+=cntr;
  cout<<arr[0]*arr[1]*arr[2];
}

int main()
{
    ROU
    int tc = 1;
    cin >> tc;
    while (tc--) solve(), cout << el;
}
