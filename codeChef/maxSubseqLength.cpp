// Given an array of random integer, find the maximum length of subsequence in it such that the elements of subsequence are consecutive.

#include <bits/stdc++.h>
using namespace std;
int DFS(int x,unordered_map<int,int>& m){
    if(m.count(x)==0)
        return 0;
    if(m.count(x-1)>0){
        if(m[x-1]>1)
            return m[x-1];
        m[x-1]= 1 + DFS(x-1,m);
        return m[x-1];
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        m[arr[i]]=1;
	    }
	    int max=1;
	    for(int i=0;i<n;i++){
	        if(m[arr[i]]==1){
	            m[arr[i]]=1+DFS(arr[i],m);
	            if(m[arr[i]]>max)
	               max=m[arr[i]];
	        }
	    }
	   // for(auto it:m)
	     //  cout<<it.first<<" -> "<<it.second<<"\n";
	    printf("%d\n",max);
	}
	return 0;
}