#include<iostream>
using namespace std;

int main(){
	
	int a[3] = {1,0,1};
	for(int i=0;i<3;i++){
		a[i]<<a[i];
		cout<<a[i]<<" ";
	}
	
	return 0;
}
