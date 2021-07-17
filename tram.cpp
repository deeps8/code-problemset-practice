#include<iostream>
using namespace std;

int main(){
	
	int n,exit,enter,cap=0,min=-1;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>exit>>enter;
		cap = cap - exit + enter;
		if(cap > min)
			min = cap;		
	} 
	
	cout<<min;
	return 0;
}
