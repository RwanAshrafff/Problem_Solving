#include <bits/stdc++.h>
using namespace std;

int mul(int a, int b){return ((a%10)*(b%10)) % 10 ;}
int fastexp(int a, int b){
    if(b == 0) return 1;
    int ret = fastexp(a, b/2);
return mul(ret, mul(ret, (b&1 ? a:1)));
}
void run() {
    int a ,b ; cin>>a>>b;
    cout<<fastexp(a,b)%10<<"\n";
}
signed main() {
    int tc = 1;
    cin >> tc;
    while (tc--) run();
}