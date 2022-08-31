#include<bits/stdc++.h>
#include<map>
using namespace std;
int dist(int i,int n,int d){
    int right=i>=d?i-d:n-d+i;
    int left=d>=i?d-i:n-i+d;
    return min(left,right);
}
long long Solve (int N, vector<long long> A) {
   int res=INT_MAX;
   unordered_map<int,vector<int>> hp;
   for(int i=0;i<A.size();i++){
       hp[A[i]].push_back(i);
   }
   for(auto j:hp){
       if(j.second.size()>1){
           vector<int> temp=j.second;
           for(int i=0;i<temp.size();i++){
               for(int k=i+1;k<temp.size();k++){
                   int t=min(dist(temp[i],N,0)+dist(temp[k],N,1),dist(temp[k],N,0)+dist(temp[i],N,1));
                   res=min(res,t);
                   
               }
           }
       }
   }
   return res==INT_MAX?-1:res;
}
