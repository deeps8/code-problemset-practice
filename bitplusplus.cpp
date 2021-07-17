#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,x=0;
	string op;
	cin>>n;
	while(n>0){
		
	cin>>op;
	if(op[1]=='-')
		x--;
	else if(op[1]=='+')
		x++;	
	n--;	
	}
	
	cout<<x;
	return 0;
}
