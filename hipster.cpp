#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int r,b;
	cin>>r>>b;
	
	if(r<b)
		cout<<r<<" ";
	else
		cout<<b<<" ";
		
	cout<<abs(r-b)/2;		
	
	return 0;
}
