#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int x,y,a,b,i=0;
		cin>>x>>y>>a>>b;
		
		long long diff = y-x,sum=a+b;
		if(diff%sum==0)
			cout<<diff/sum<<endl;
		else
			cout<<-1<<endl;	
	}
	
	return 0;
}
