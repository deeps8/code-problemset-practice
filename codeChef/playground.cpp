#include<bits/stdc++.h>
using namespace std;

long long sendNode(int x,int y,int m){
    return m*(x-1) + y;
}

int playground (int n, int m, int q, vector<vector<int> > a) {
   // Write your code here
    long long u,v;
    int res=1;
    map<int,vector<int>> adj;
    
    for(int i=0;i<q;i++){
        u = sendNode(a[i][0],a[i][1],m);    
        v = sendNode(a[i][2],a[i][3],m);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(auto i:adj){
        cout<<i.second.size()<<" ";
        if(i.second.size()>0)
            res++;
    }
    cout<<endl;
    if(m==1 || n==1)
        return res;

    return res-1;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int M;
        cin >> M;
        int Q;
        cin >> Q;
        vector<vector<int> > A(Q, vector<int>(4));
        for (int i_A = 0; i_A < Q; i_A++)
        {
            for(int j_A = 0; j_A < 4; j_A++)
            {
                cin >> A[i_A][j_A];
            }
        }

        int out_;
        out_ = playground(N, M, Q, A);
        cout << out_;
        cout << "\n";
    }
}