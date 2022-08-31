#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n,a,m;
	cin>>n;
	
	unordered_map<int ,int> um;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		cin>>a;
		um[a]++;
	}
	
	cin>>m;
	
	for(auto u:um){
		v.push_back(make_pair(u.second,u.first));
	}
	
	sort(v.begin(),v.end());
	int s=v.size(),c=0;
	for(int i=0;i<s;i++){
		if(v[i].first<=m){
			m -= v[i].first;
			c++;
		}
		else
			break;
	}
	
	cout<<s-c<<endl;
	
	return 0;
}
