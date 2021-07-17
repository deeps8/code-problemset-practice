#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,a,b,ma,mi,count=0;
		cin>>n;
		cin>>a;
		for(int i=1;i<n;i++){
			cin>>b;
			mi = min(a,b);
			ma = max(a,b);
			
			if((float)ma/mi>2){
					while(mi*2<ma){
						mi *= 2;
						count++;
					}
			}
			
			a = b;
		}
		
		cout<<count<<endl;
	}
	
	return 0;
}
