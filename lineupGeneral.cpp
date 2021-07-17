#include<iostream>
using namespace std;

int main(){
	
	int n,val,max,min,x=0,y=0;
	
	cin>>n;
	cin>>val;
	max=min=val;
	for(int i=1;i<n;i++){
		cin>>val;
		if(max<val){
			max=val;
			x=i;
		}
		if(min>=val){
			min=val;
			y=i;
		}	
	}
	
	if(x>y)
		x--;
	
	cout<<(x+(n-1)-y);	
	
	return 0;
}
