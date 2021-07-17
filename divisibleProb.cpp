#include<iostream>
using namespace std;

int main(){
	
	int n,a,b;
	
	cin>>n;
	
	while(n-->0){
		cin>>a>>b;
		if(a%b!=0){
// first logic (mine)
//			int q = a/b;
//			q++;
//			q = (b*q) - a;
//			cout<<q<<endl;	

// second logic (improv)
			a = a%b;
			cout<<b-a<<endl;		
		}
		else{
			cout<<0<<endl;	
		}
		
	}
	
	return  0;
}
