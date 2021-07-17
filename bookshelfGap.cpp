#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int n,a,g=0,c=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a;
			if(a==1 && g==0 ){
				g = i;
			}else if(a==1 && g!=0){
				c = c + i - g;
				g = i;
				c--;
			}
		}
		
		cout<<c<<endl;
	}
	
	return 0;
}
