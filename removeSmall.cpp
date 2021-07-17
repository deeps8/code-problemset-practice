#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int t,n,c=0;
	cin>>t;
	
	while(t-->0){
		cin>>n;
		c=0;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		sort(a,a+n);
		
		for(int i=0;i<n-1;i++){
			if(abs(a[i]-a[i+1])>1){
				c=1;
				break;	
			}		
		}	
		
		if(c==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;	
		
	}
	
	
	return 0;
}
