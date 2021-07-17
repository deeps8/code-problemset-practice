#include<iostream>
using namespace std;

int main(){
	int a,b,d;
	cin>>a>>b;
	
	if(a<=b)
		a=b;

	int n = 6-a+1;
	if(6%n==0)
		d = n;
	else
		d = 6-n;
		
	cout<<n/d<<"/"<<6/d;
	
	return 0;				
}
