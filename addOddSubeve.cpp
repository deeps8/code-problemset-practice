#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int a,b;
		cin>>a>>b;
		int d = abs(b-a);
		
		if(a==b)
			cout<<0<<endl;
		else if(b<a){
			if(d & 1)
				cout<<2<<endl;
			else
				cout<<1<<endl;	
		}
		else{
			if(d & 1)
				cout<<1<<endl;
			else
				cout<<2<<endl;
		}
			
		
	}
	
	return 0;
}
