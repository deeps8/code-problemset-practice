#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int a,b,temp;
		cin>>a>>b;
		
		if(a>b){
			temp = a;
			a = b;
			b = temp;
		}
		
		a = a*2;
		if(a<b)
			cout<<b*b<<endl;
		else
			cout<<a*a<<endl;	
		
		
		
	}
	
	return 0;
}
