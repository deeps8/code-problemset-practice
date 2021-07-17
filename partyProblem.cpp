#include<iostream>
using namespace std;

int main(){
	
	int n,c=0,k,sum=0;
	cin>>n>>k;
	
	for(int i=1;i<=n;i++){
		sum += i*5;
		if(sum<=(240-k))
			c++;
		else
		 break;	
	}
	
	cout<<c;
	
	return 0;
}
