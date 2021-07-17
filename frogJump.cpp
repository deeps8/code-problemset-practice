#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		long long a,b,k,dis;
		cin>>a>>b>>k;
		
		dis = (a-b)*(k/2);
		
		if(k%2)
			dis += a;
		
		cout<<dis<<endl;			 
	}
	return 0;
}
