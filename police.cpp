//1+1+1+1+1+1+1
#include<iostream>
using namespace std;

int main(){
	
	int n,sum=0,c=0;
	cin>>n;
	
	while(n-->0){
		int i;
		cin>>i;
		sum +=i;
		if(sum<0){
			sum=0;
			c++;
		}	
	}
	cout<<c;
	
	return 0;
}
