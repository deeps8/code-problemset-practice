#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,k,sum=0;
		cin>>n>>k;
		
		int a[n],b[n];
		
		for(int i=0;i<n;i++)
			cin>>a[i];
			
		for(int i=0;i<n;i++)
			cin>>b[i];	
		
		sort(a,a+n);
		sort(b,b+n);
		
		for(int i=0;i<k;i++){
			if(a[i]<b[n-i-1])
				a[i] = b[n-i-1];
			
			sum += a[i];
		}
		
		for(int i=k;i<n;i++)
			sum += a[i];	
		
		cout<<sum<<endl;
		
	}
	
	
	return 0;
}

