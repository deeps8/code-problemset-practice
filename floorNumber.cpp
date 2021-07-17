#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		
		int n,x;
		cin>>n>>x;
		if(n<=2)
            cout<<1<<"\n";
        else
            cout<<(n-3)/x+2<<"\n";
		
	}
	
	return 0;
}
