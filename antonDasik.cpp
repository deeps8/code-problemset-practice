#include<iostream>
using namespace std;

int main(){
	int n,at=0,da=0;
	char g;
	cin>>n;
	while(n>0){
		cin>>g;
		if(g=='A')
			at++;
		else
			da++;	
		n--;
	}
	
	if(at == da)
		cout<<"Friendship";
	else if(at > da)
		cout<<"Anton";
	else
		cout<<"Danik";		
	
	return 0;
}
