#include<iostream>
using namespace std;

int main(){
	
	long long n,a,b,c=1,max=c;
	cin>>n;
	
	cin>>a;	
	for(int i=1;i<n;i++){
		cin>>b;
		if(a<b){
			c++;
		}
		else if(max < c){
			max = c;
			c = 1;
		}else{
			c = 1;
		}
				
		a = b;			
	}
	
	if(max<c)
		cout<<c;
	else
		cout<<max;	
	
	return 0;
}
