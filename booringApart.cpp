#include<iostream>
using namespace std;

int main(){
	
	int t,sum[5]={0,1,3,6,10};
	cin>>t;
	
	while(t-->0){
		int n,c=0,r;
		cin>>n;
		while(n>0){
			r = n%10;
			n = n/10;
			c++;
		}
		r--;
		cout<<r*10+sum[c]<<endl;
		
	}
	
	return 0;
}
