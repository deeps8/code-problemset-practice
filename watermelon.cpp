#include<iostream>
using namespace std;

int main(){
	
	int w;
	cin>>w;
	
	if(w%2==0 && w>2 && w<=100){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	
	return 0;
	
}
