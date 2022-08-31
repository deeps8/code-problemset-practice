// majority element : element which appear more than n/2 times.
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int a,max_count = 0,res = 0;
	map<int,int> mp;
	
	for(int i=0;i<n;i++){
		cin>>a;
		mp[a]++;
		if(mp[a]>max_count){
			res = a;
			max_count = mp[a];
		}
	}
	
	if(max_count > (n/2))
		cout<<res;
	else
		cout<<"No Majority Element";

	
	return 0;
}
