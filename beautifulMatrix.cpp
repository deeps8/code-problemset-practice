#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int val,i,j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			cin>>val;
			if(val==1){
				cout<<abs(i-3)+abs(j-3);
			}
		}
				
	}
	
	return 0;
}
