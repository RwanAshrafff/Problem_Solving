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
const long long N = 2e5+5;
const long long mod = 1e9+7;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
const int dx8[] = {1, 0, -1, 0,1,-1,1,-1};
const int dy8[] = {0, 1, 0, -1,1,-1,-1,1};

void run() {
    int n ; cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<vector<int>>adj(26);
    vector<int>indegree(26,0);

    for(int i=0;i<n-1;i++){
        string a=v[i];
        string b = v[i+1];
        bool found=0;
        for(int j=0;j<min(a.length(),b.length());j++){
            if(a[j]!=b[j]){
                int u=a[j]-'a';
                int v= b[j]-'a';
                adj[u].pb(v);
                indegree[v]++;
                found=true;
                break;
            }
        }
        if(!found && a.length()>b.length()){ //care car 
            cout<<"Impossible";
            return;
        }
    }  
    queue<int>q;
    for (int i=0;i<26;i++){
        if(indegree[i]==0) q.push(i); 
    }
    string ans="";
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans+=(char)(node+'a');
        for(auto &child:adj[node]){
            indegree[child]--;
            if( indegree[child]==0) q.push(child);
        }
    }
    if(ans.length()!=26) cout<<"Impossible";
    else cout<<ans;
}
signed main() {
    ROU
    int tc = 1;
    //cin >> tc;
   //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    while (tc--) run(), cout << el;
}