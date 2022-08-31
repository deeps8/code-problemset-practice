//   Coded by- Krypto_Ray

#include <bits/stdc++.h>
using namespace std;

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define spark ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#define int                        long long
#define F                          first
#define S                          second
#define pb                         push_back
#define test_cases                 cin>>t;
#define endl                       "\n"

const int mod=1e9+7;
const int mod1=998244353;
const int inf=1e18;
const long double pi=3.1415926535;
const long double eps=1e-9;
const int N=1e5;

int lcm(int a,int b){
    return (a*b)/__gcd(a,b);
}

void dfs(vector<set<int>>&graph,vector<bool>&visited,int src,pair<int,int>&res,int m,int par,vector<int>&dist){
    visited[src]=true;
    res.F++;
    for(auto x:graph[src]){
        if(not visited[x]){
            dist[x]=dist[src]+1;
            dfs(graph,visited,x,res,m,src,dist);
        }
        else if(x!=par){
            res.S=abs(dist[src]-dist[x])+1;
        }
    }
}

vector<vector<int>>dp(N+1,vector<int>(2,0));

int power(int a,int b){
    int res=1;
    while(b){
        if(b&1) res=(res*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return res;
}

int mywork(){

    int n,m;
    cin>>n>>m;
    vector<bool>visited(n+1);
    vector<set<int>>graph(n+1);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        graph[x].insert(i);
        graph[i].insert(x);
    }
    dp[1][0]=0;
    dp[1][1]=m;
    for(int i=2;i<=n;i++){
        dp[i][1]=dp[i-1][0];
        dp[i][0]=((dp[i-1][0]*(m-2))%mod+(dp[i-1][1]*(m-1))%mod)%mod;
    }
    int ans=1;
    vector<int>dist(n+1);
    for(int i=1;i<=n;i++){
        if(not visited[i]){
            pair<int,int>res={0,0};
            dfs(graph,visited,i,res,m,0,dist);
            if(res.S==0) res.S=2;
            ans=(((ans*dp[res.S][0])%mod)*power(m-1,res.F-res.S))%mod;
        }
    }
  ans=(ans+mod)%mod;
    cout<<ans<<endl;

return 0;
}
int32_t main(){
    spark
    int t=1;
    test_cases
    while(t--){
        mywork();  
    }
    return 0;
}