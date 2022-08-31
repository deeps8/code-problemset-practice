#include<iostream>
#include<vector>
using namespace std;

/*
	Method 2 : Using Recursion.
	we divide the set by seperating the 1st element from it and remaing will be called again for seperation.
	After we reach to smallest set we will return the subsets and add the seperating element to the set and make new subsets.
	This process goes on till we reach the our first call.
	
	example : 
	{1,2,3}  => {1,{2,3}} => {1,{2,{3}}} 
	Now we reach at smallest unit {3}, it will contain subset {},{3} (null and element itself)
	Now back track the function call and add the seperating element to previous one.
	{{},{3}} => {{},{3},{2},{2,3}} => {{},{3},{2},{2,3},{1},{1,3},{1,2},{1,2,3}}
*/

void subset(vector<int>& a,int idx,vector<vector<int>>& res){
	
	if(idx == a.size()-1){
		res.push_back({ });
		res.push_back({a[idx]});
	}
	else{
		subset(a,idx+1,res);
		int n = res.size();
		for(int i=0;i<n;i++){
			vector<int> r = res[i];
			r.push_back(a[idx]);
			res.push_back(r);
		}
			
	}
	
	
}

vector<vector<int>> gen_subset(){
	int n,num;
	cin>>n;
	vector<int> a;
	vector<vector<int>> res;
	for(int i=0;i<n;i++){
		cin>>num;
		a.push_back(num);
	}
		
	subset(a,0,res);
	
	return res;
}

int main(){
	
	vector<vector<int>> res = gen_subset();
	
	for(int i=0;i<res.size();i++){
		for(int j=0;j<res[i].size();j++)
			cout<<res[i][j]<<" ";
	
		cout<<endl;
	}
	
	return 0;
}
