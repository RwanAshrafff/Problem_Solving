#include <bits/stdc++.h>
using namespace std;
#define ROU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(container) (container).begin(), (container).end()
#define rall(v) v.rbegin(), v.rend()
#define el "\n"
#define ll long long
#define int long long
#define f first
#define s second
#define pb push_back
#define popcnt(x) __builtin_popcountll(x)
const long long N = 500+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

char arr[N][N];
bool vis[N][N];
vector<pair<int,int>> order;
int n,m,k;

void dfs(int i,int j){
    if (i>n || j>m || i<1 || j<1 || vis[i][j] || arr[i][j]=='#') return;
    
    vis[i][j]=1;
    
    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);
    
    order.pb({i,j});
}

void run() {
    cin>>n>>m>>k;
    int doti=1,dotj=1;
    
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin>>arr[i][j];
            if (arr[i][j]=='.') {
                doti=i;
                dotj=j;
            }
        }
    }
    
    dfs(doti,dotj);
    
    for (int i=0;i<k;i++){
        int x = order[i].f;
        int y = order[i].s;
        arr[x][y] = 'X';
    }
    
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cout<<arr[i][j];
        }
        cout<<el;
    }
}

signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
    while (tc--) run();
}