#include<iostream>
using namespace std;

int main(){
	
	int n,sum=0;
	cin>>n;
	
	while(n-->0){
		int m,c;
		cin>>m>>c;
		if(m>c)
			sum = sum +1;
		else if(c>m)
			sum = sum - 1;	
	}
	
	if(sum>=1)
		cout<<"Mishka"<<endl;
	else if(sum<=-1)
		cout<<"Chris"<<endl;
	else
		cout<<"Friendship is magic!^^"<<endl;		
	
	return 0;
}
