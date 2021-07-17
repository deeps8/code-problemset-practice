#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int a,b,c,n,max;
		cin>>a;
		max=a;
		cin>>b;
		if(max<b)
			max = b;
		cin>>c;
		if(max<c)
			max=c;
			
		cin>>n;
		n = n - ((max-a) + (max-b) + (max-c) );
		
		if(n%3 || n<0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;	
				
	}
	
	return 0;
}
