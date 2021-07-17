#include<iostream>
using namespace std;

int main(){
	
	int n,c=0;
	
	cin>>n;	
	cout<<"I hate ";
	c--;
	for(int i=1;i<n;i++){
		cout<<"that ";
		if(c==0){
			cout<<"I hate ";
			c--;
		}
		else{
			cout<<"I love ";	
			c++;
		}	
			
	}
	cout<<"it ";
	
	return  0;
}
