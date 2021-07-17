#include<iostream>
using namespace std;

int main(){
	
	long long k,r;
	
	cin>>k>>r;
	
	for(int i=1;i<=10;i++){
		if((k*i)%10==r || (k*i)%10==0){
	      cout<<i<<endl;
	      return 0;
	    }
	}
	
	return 0;
}
