#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,a,ones=0,twos=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			if(a==1)
				ones++;
			else
				twos++;	
		}
		
		int s = ones+(twos*2);
		
		if(s%2)
			cout<<"NO"<<endl;
		else if((s/2)%2 && ones==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;		 
		
		
	}
	
	return 0;
}
