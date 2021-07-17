#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		long long a,b,n,c=0;
		cin>>a>>b>>n;
		
		
		while(a<=n || b<=n){
			if(a>b)
				swap(a,b);
			
			a += b;
			swap(a,b);
			c++;
					
		}	
		
		cout<<--c<<endl;
	}
	
	return 0;
}
