#include<iostream>
#include<math.h>
using namespace std;


int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		long long a,b,c=0;
		cin>>a>>b;
		
		c = abs(a-b)/10;
		if(abs(a-b)%10!=0)
			c++;
		
		cout<<c<<endl;	
			
	}
	
	return 0;
}
