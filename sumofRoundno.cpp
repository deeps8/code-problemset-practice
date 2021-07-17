#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int n,num,c,flag,r;
	cin>>n;
	
	while(n-->0){
		cin>>num;
		c=0;
		flag=0;
		int x = num;
		while(x>0){
			r = x%(10);
			if(r!=0){
				flag++;
			}
			x=x/(10);
		}
		
		cout<<flag<<endl;
		while(num>0){
			r = num%(10);
			if(r!=0){
				cout<<r*pow(10,c)<<" ";
				flag++;
			}
			num=num/(10);
			c++;
		}
		cout<<endl;

		
	}
	
	return 0;
}
