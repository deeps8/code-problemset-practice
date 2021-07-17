#include<iostream>
using namespace std;

int main(){
	
	int n,sum=0;
	string c;
	cin>>n;
	
	while(n-->0){
		cin>>c;
		if(c[0]=='T')
			sum += 4;
		else if(c[0]=='C')
			sum += 6;
		else if(c[0]=='O')
			sum += 8;
		else if(c[0]=='D')
			sum += 12;
		else if(c[0]=='I')
			sum += 20;					
	}
	
	cout<<sum;
	return 0;
}
