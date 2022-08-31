#include<map>
#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Size : ";
	cin>>n;
	
	int a[n],flag=1;
	map<int,int> mp;
	cout<<"Array : ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	// Unique Elements or not;
	for(int i=0;i<n;i++){
		if(mp.find(a[i]) != mp.end()){
			flag = 0;
			break;
		}	
		
		mp[a[i]]++;
	}
	
	if(flag)
		cout<<"Unique";
	else
		cout<<"Not Unique";
	
	return 0;
}
