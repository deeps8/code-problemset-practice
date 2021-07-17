#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,a,odd=0;
		cin>>n;	
		for(int i=0;i<n;i++){
			cin>>a;
			if(a%2!=0)
				odd++;
				
		}
		
//		if(odd%2!=0)
//			cout<<"YES"<<endl;
//		else if(odd%2==0 && odd<n)
//			cout<<"YES"<<endl;
//		else 
		if(odd%2==0 && odd==n)
			cout<<"NO"<<endl;	
		else if(odd==0)
			cout<<"NO"<<endl;
		else 
			cout<<"YES"<<endl;			
			
	}
	
	return 0;
}
