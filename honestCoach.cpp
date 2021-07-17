#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int t,n;
	cin>>t;
	
	while(t-->0){
		int m=0;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
			cin>>a[i];
			
		sort(a,a+n);
		m = a[1]-a[0];
		for(int i=2;i<n;i++){
			m = min(m,a[i]-a[i-1]);
		}		
		
		cout<<m<<endl;
		
	}
	
	return 0;
}
