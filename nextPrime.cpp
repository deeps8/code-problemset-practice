#include<iostream>
using namespace std;

int main(){
	
	int n,m,c=0,flag;
	cin>>n>>m;
	
	for(int i=m;i>n;i--){
		flag=0;
		for(int j=2;j<i;j++){
			if(i%j==0)
				flag=1;
		}
		
		if(flag==0){
			c = i-n;
		}
		
	}
	
	if(c==m-n)
		cout<<"YES";
	else
		cout<<"NO";	
	
	return 0;
}
